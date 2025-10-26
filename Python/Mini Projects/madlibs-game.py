import time

pronoun = input("Enter a pronoun: ")
ethnicity = input("Enter an ethnicity: ")
gender = input("Enter an gender: ")
verb = input("Enter an verb: ")
adjective = input("Enter an adjective: ")
adverb = input("Enter an adverb: ")

string = f"There was a {gender} named {pronoun}. {pronoun} was a {ethnicity}, and he was {adjective}\n{pronoun} was {verb} {adverb} one day."

print(string)