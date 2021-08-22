from ctype import *

def main():
    lower = 0
    upper = 0
    sp_char = 0
    num = 0

    passwd = input("passwd: ")
    
    for char in passwd:
        if is_lower(char):
            lower+=1
        if is_upper(char):
            upper+=1
        if is_num(char):
            num+=1
        if is_sp_char(char):
            sp_char+=1
    
    if num*upper*sp_char*lower != 0:
        print("Strong!")
    else:
        print("bleeeeh")

main()
    
    