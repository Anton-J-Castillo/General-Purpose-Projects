import string

def caesar_cipher(text, shift):
    alphabet = string.ascii_lowercase
    result = ""

    for char in text:
        if char.lower() in alphabet:
            new_index = (alphabet.index(char.lower()) + shift) % 26
            new_char = alphabet[new_index]
            result += new_char.upper() if char.isupper() else new_char
        else:
            result += char  # leave punctuation, spaces, digits unchanged

    return result

print(caesar_cipher("HELLO WORLD", 3))  # KHOOR ZRUOG