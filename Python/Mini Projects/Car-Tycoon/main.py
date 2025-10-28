import time
import threading

class Engine:
    
    def __init__ (self, name, price, money_boost):
        self.name = name
        self.price = price
        self.money_boost = money_boost

class Car:
    
    isVehicle = True
    
    def __init__(self, name, price, money, speed, engine=None):
        self.name = name
        self.price = price
        self.money = money
        self.speed = speed
        self.amount = 1
        self.engine = engine if engine else Engine("Default", 1000, 1)
        
    @staticmethod
    def checkIfExists(carName):
        availableCars = [
        "honda civic",
        "dodge challenger",
        "lamborghini huracan",
        "toyota corolla",
        "mazda 3",
        "ford mustang",
        "chevrolet camaro",
        "bmw 3 series",
        "audi a4",
        "mercedes-benz c-class",
        "tesla model 3",
        "porsche 911",
        "nissan gt-r",
        "ferrari f8",
        "mclaren 720s",
        "bugatti chiron",
        "subaru wrx",
        "mitsubishi lancer evolution",
        "lexus is",
        "jaguar f-type",
        "aston martin vantage",
        "koenigsegg jesko",
        "pagani huayra"
    ]
        if carName.lower() in availableCars:
            return True
        
        return False
        
class Player:
    
    isUser = True
    
    def __init__(self, name):
        self.name = name
        self.money = 10000
        self.ownedCars = [Car("Nissan Versa", 15000, 2000, 80)]
        self.ownedEngines = []
        
def buyCar(player):
    print("*********CAR SHOP***************")
    carShop = [
        Car("Toyota Corolla", 18000, 4000, 95),
        Car("Honda Civic", 20000, 4500, 100),
        Car("Mazda 3", 22000, 5000, 105),
        Car("Dodge Challenger", 40000, 8000, 130),
        Car("Ford Mustang", 45000, 9000, 140),
        Car("Chevrolet Camaro", 42000, 8500, 135),
        Car("BMW 3 Series", 50000, 12000, 150),
        Car("Audi A4", 52000, 12500, 155),
        Car("Mercedes-Benz C-Class", 55000, 13000, 160),
        Car("Tesla Model 3", 60000, 14000, 170),
        Car("Porsche 911", 120000, 30000, 210),
        Car("Nissan GT-R", 115000, 29000, 205),
        Car("Ferrari F8", 280000, 40000, 240),
        Car("McLaren 720S", 300000, 45000, 250),
        Car("Bugatti Chiron", 3500000, 500000, 300),
        Car("Subaru WRX", 35000, 7500, 125),
        Car("Mitsubishi Lancer Evolution", 37000, 7800, 128),
        Car("Lexus IS", 40000, 8200, 135),
        Car("Jaguar F-Type", 90000, 20000, 200),
        Car("Aston Martin Vantage", 120000, 30000, 220),
        Car("Lamborghini Huracan", 200000, 35000, 230),
        Car("Koenigsegg Jesko", 3000000, 480000, 305),
        Car("Pagani Huayra", 2500000, 450000, 300),
    ]

    # Display cars
    for index, car in enumerate(carShop, start=1):
        print(f"{index}. {car.name} | Price: ${car.price} | Money: {car.money} | Speed: {car.speed}")

    print("*ENTER 'q' TO QUIT*")

    while True:
        choice = input("Enter the number of the car you want to buy: ")
        if choice.lower() == "q":
            print("Exiting shop...")
            time.sleep(1)
            break

        if not choice.isdigit() or int(choice) < 1 or int(choice) > len(carShop):
            print("Enter a valid number.")
            continue

        selectedCar = carShop[int(choice)-1]

        # Check if player already owns this car
        if any(c.name.lower() == selectedCar.name.lower() for c in player.ownedCars):
            print(f"You already own {selectedCar.name}!")
            continue

        # Check if player has enough money
        if player.money >= selectedCar.price:
            player.money -= selectedCar.price
            player.ownedCars.append(selectedCar)
            print(f"You bought {selectedCar.name}! Remaining money: ${player.money}")
        else:
            print("You don't have enough money to buy this car.")
    
def loadPlayerInventory(player):
    index = 0
    
    for object in range(0, len(player.ownedCars)):
        print(f"{index + 1}. Name: {player.ownedCars[index].name} | Price: {player.ownedCars[index].price} | Money: {player.ownedCars[index].money} | Speed: {player.ownedCars[index].speed} | Engine: {player.ownedCars[index].engine.name}") 
        index+=1
        
def searchForCar(player, carName):
    if len(player.ownedCars) > 0:    
        for car in player.ownedCars:
            if car.name.lower() == carName.lower():
                return car
    return None

        
def startDriving(player, carName):
    print("**********DRIVING************")
    car = searchForCar(player, carName)
    if not car:
        return False
    
    print(f"Driving your {car.name}...")
    
    # Example formula for money earned
    baseEarnings = car.money * car.engine.money_boost
    bonus = car.speed * 0.2
    totalEarnings = int(baseEarnings + bonus)
    
    print(f"You will gain ${totalEarnings} after this drive.")
    
    time.sleep(10)

    player.money += totalEarnings    
    
    return True 
       
def main():
    choice = 0
    
    playerName = input("Enter your name: ")
    
    player = Player(playerName)
    
    while(choice != 5):
        print("***************CAR TYCOON*****************")
        print(f"Player Name: {player.name} | Current Money: ${player.money}")
        choice = input("Choose a function from below:\n1. Check Inventory\n2. Go to Shop\n3. Modify Car\n4. Drive (Gives Money)\n5. Quit Game\n")
        
        if not choice.isdigit():
            print("Please enter a number")
            continue
        
        choice = int(choice)
        
        if not (choice > 0 and choice <= 5):
            print("Enter a valid option")
            continue
        
        match(choice):
            case 1:
                if not len(player.ownedCars) == 0:
                    print("*********Inventory***************")
                    print("*ENTER 'q' TO QUIT*")
                    loadPlayerInventory(player)
                    while True:
                        time.sleep(0.2)
                        userInput = input()
                        if userInput == "q":
                            print("Exiting inventory...")
                            time.sleep(2)
                            break
                
            case 2:
                buyCar(player)
                
            case 3:
                pass
            
            case 4:
                carName = input("What car do you want to use?: ")
                drove = startDriving(player, carName)
                if drove:
                    print(f"Drive finished! Your new balance: ${player.money}")
                else:
                    print("You did not own the car!")
                time.sleep(2)  
                              
            case 5: 
                print("Thanks for playing")
                break

if __name__ == "__main__":
    main()