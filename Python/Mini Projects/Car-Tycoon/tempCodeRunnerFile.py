    print(player.name, player.money)
    
    while(choice != 4):
        print("***************CAR TYCOON*****************")
        print(f"Player Name: {player.name} | Current Money: {player.money}")
        choice = input("Choose a function from below:\n1. Check Inventory\n2. Go to Shop\n3. Modify Car\n4. Drive (Gives Money)\n5. Quit Game\n")
        
        if not choice.isdigit():
            print("Please enter a number")
            continue
        
        choice = int(choice)
        
        if not (choice > 0 and choice <= 4):
            print("Enter a valid option")
            continue
        
        
        match(choice):
            case 1:
                if not len(player.ownedCars) == 0:
                    loadPlayerInventory(player)
                    time.sleep(2)