#take user name
#start with a random number
#limit of 6 guesses
#create a question to take a guess
#inside of this question if the user gets correct , end the program


import random

name = input("Whats your name?")
print("Welcome to Guess the number", name)
print("You will have 6 chances to guess the number, best of luck!")

number = random.randint(1,999)
print(number)

guess= 0
for i in range(7):
    guess = input("Take a guess:")
    guess = int(guess)
    if guess > number:
        print("too high")
    elif guess > number:
        print("too high")
    elif guess > number:
        print("too high")
    elif guess == number:
        print("Got it! ", number )
        break
        