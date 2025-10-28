import random
import time

def createRow():
    symbols = ("🍇", "🍒", "🍌", "🥝", "🍓", "🍑", "🍈")
    
    return [random.choice(symbols) for _ in range(3)]

def printRow(row):
    rowText = "|"
    for symbol in row:
        rowText += symbol
        rowText += " | "
        
    return rowText

def calculateWinnings(row, bet):
    if row[0] == row[1] and row[1] == row[2]:
        return bet * 5
    elif row[0] == row[1] or row[1] == row[2] or row[0] == row[2]:
        return bet * 2
    else:
        return 0

def main():
    balance = 100
    
    while balance > 0:
        
        print("*************Casino Game******************")
        print(f"Current Balance: ${balance}")
        
        bet = input("Enter a bet amount: ")
        
        if not bet.isdigit():
            print("Please enter a valid number")
            continue
        
        bet = int(bet)
        
        if bet <= 0:
            print("Must bet atleast $1")
            continue
            
        if bet > balance:
            print("Insufficient Funds")
            continue
        
        balance -= bet
        
        row = createRow()
        
        print("SPINNING...")
        time.sleep(1)
        
        print(printRow(row))
        
        winnings = calculateWinnings(row, bet)
        balance += winnings
        
        if winnings > 0:
            print(f"NICE! YOU WON ${winnings}")
    else:
        print("Ran out of money!")
        

if __name__ == '__main__':
    main()