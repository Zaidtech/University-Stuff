import random
from datetime import datetime
import math

def reverse(input_number):    
    rev_number = ""
    input_number=str(input_number)
    length = len(str(input_number))
    for i in range(0,length):
        rev_number = rev_number + (input_number[length-1-i] );
    
    print(f"Reversed no is {rev_number}")
    return int(rev_number)

def generate():
    random.seed(datetime.now())
    # input_number = random.randrange(1,100000)
    print(f"No generated is ...{input_number}")
    reversed_number = reverse(input_number)
    print(f"Reversed number is {reversed_number}")
    result(6147,7416)

rev_ans =0;

def result(input_number,reversed_number):
    print("Here!!")
    subtraction = input_number-reversed_number
    if(subtraction<0):
        answer = -1*subtraction
    else:
        answer=subtraction    
    print(f"Result = {answer}")
    if(answer==6147 or answer==0):
        print("In to the depts!!")
        return 0;
    rev_ans = reverse(answer)
    print("Again Calling ")
    result(rev_ans,answer)

generate()