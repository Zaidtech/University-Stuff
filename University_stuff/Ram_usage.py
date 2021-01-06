#!usr/bin/env python3
import os

#extracting the values
values = os.popen('free -t').readlines()
numbers = values[1].split("       ")
total, used, free, shared, buff_cache, available = numbers[1].split("    ")

#displaying the output
print(f"Total memory is : {total}")
print(f"Used  memory is : {used}")
print(f"Buff/Cache is : {buff_cache}")
print(f"Available memory is : {available}")
percentage_available = (int(free.strip(" ")) / int(total.strip(" ") ))*100
print(f"Percentage of free memory : {percentage_available}% \n")









