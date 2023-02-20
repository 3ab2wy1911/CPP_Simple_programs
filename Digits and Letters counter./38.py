string = input("Please input your string: ")
letters = 0 
numbers = 0
def check(string):
    global numbers
    global letters
    for i in range(len(string)):
        if string[i].isalpha():
           letters += 1
        elif string[i].isnumeric():
           numbers += 1
    print('Letters: ', letters)
    print('numbers: ', numbers)
check(string)
