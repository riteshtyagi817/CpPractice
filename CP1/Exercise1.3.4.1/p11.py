#!/usr/bin/python3
from math import *
num = int(input("Enter the number to check for prime: "))
flag = True
if num == 1:
	flag = False
else:
	for i in range (2,(num//2)+1):
		if num % i == 0:
			flag = False
			break


if flag == True:
	print("Prime")
else: 
	print("Composite")
	
