import random
import string

chars = " " + string.punctuation + string.digits + string.ascii_letters
chars = list(chars)

key = chars.copy()
random.shuffle(key)


while True:
    choice = input("Do you want to encyrpt or decrypt?: ")
    match(choice):
        case "encrypt":
            plain_text = input("Enter a message to encrypt: ")
            cipher_text = ""

            for letter in plain_text:
                index = chars.index(letter)
                cipher_text += key[index]
    
            print(f"Original message: {plain_text}")
            print(f"Encrypted message: {cipher_text}")
            
            continue
        case "decrypt":
            cipher_text = input("Enter a message to decrypt: ")
            plain_text = ""
            
            for letter in cipher_text:
                index = key.index(letter)
                plain_text += chars[index]

            print(f"Encrypted Message: {cipher_text}")
            print(f"Decrypted Message: {plain_text}")
            
            continue
        case _:
            print("Please enter a valid option")
            break