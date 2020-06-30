from cs50 import get_string, get_int
from time import sleep
import csv
from sys import argv, exit
import speech_recognition

words = set()

def check(word):
    if word.lower() in words:
        return  True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip("\n"))
    file.close()
    return True

def size():
    return len(words)

def unload():
    return True
    
def get_name():
    s = input("What's your name?")
    print(f"Hello, {s}")
    
def age():
    s = input("What's your age?")
    print(f"You are at least, {int(s)*365} years old")
    
def comparator():
    x = get_int("x: ")
    y = get_int("y: ")
    if x < y:
        print("Y is greater to X")
    elif x > y:
        print("X is greater to Y")
    else:
        print("X is equal to Y")

def agree():
    s = get_string("Do you agree?")
    
    if s.lower() in ["y","yes"]:
        print("Agree")
    elif s.lower() in ["n","no"]: 
        print("Do not agree")

def cough(times):
        print("Cough \n" * times)
        
def positive():
    while True:
        i = get_int("Type a number: ")
        if i >= 0:
            break
    return i
def marioH(times):
    print("?"*times)
    
def marioV(times):
    print("#\n" *times, end="")
    
def mario2d(times, timess):
    for i in range(times):
        for j in range(timess):
            print("#", end = "")
        print()

def overflow():
    i = 1
    while True:
        print(i)
        sleep(.01)
        i *= 2

def scores():
    score = [73,73,33]
    print(f"Average: {sum(score)/len(score)}")

def sstring():
    s = input("Input: ")
    print("Output: ", end="")
    for c in s:
        print(c, end="")
    print()

def uppercase():
    s = input("Before: ")
    print(f"After: { s.upper() }")

def lenArgv():
    for i in range(len(argv)):
        print(argv[i])

def exit():
    if len(argv) != 2:
        print("missing argument")
        exit(1)

def names():
    name = [ "EMMA", "RODRIGO", "BRIAN", "DAVID" ]
    if  "EMMA" in names:
        print("Found")
        exit(0)
    print("Not Found")
    exit(1)
    
def phonebook():
    people = {
        "EMMA": "617-555-0100", 
        "RODRIGO":"617-555-0101", 
        "BRIAN":"617-555-0102", 
        "DAVID":"617-555-0103" 
    }
    
    if "EMMA" in people:
        print(f"Found {people['EMMA']}")
        exit(0)
    else:
        print("Not found")
        exit(1)
        
def compareStrings():
    s = input("Input s: ")
    t = input("Input t: ")
    if s == t:
        print("Same")
    else:
        print("Different")

def swapValues():
    x = 1
    y = 2
    print(f"x is {x}, y is {y}")
    x, y = y, x
    print(f"x is {x}, y is {y}")

def phonebookCsv():
    file = open("phonebook.csv", "a")
    nome = input("Name: ")
    number = input("Number: ")
    writer = csv.writer(file)
    writer.writerow((name, number))
    file.close()

def voice():
    recognizer = speech_recognition.Recognizer()
    with speech_recognition.Microphone() as source:
        print("Say something")
        audio = recognizer.listen(source)
    print("Google Speech Recognition thinks you said: ")
    print(recognizer.recognize_google(audio))

    
############
def main():
############
    #get_name()
    #age()
    #comparator()
    #agree()
    #cough(4)
    #positive()
    #marioV(4)
    #marioH(4)
    #mario2d(4,3)
    #overflow()
    #sstring()
    voice()
    
    
main()