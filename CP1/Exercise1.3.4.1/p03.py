#!/usr/bin/python3
from datetime import date
year = int(input())
month = int(input())
day = int(input())
s = date(year, month, day)
t = date.today()
print(s.strftime("%a"))
print("{} day(s) ago".format((t-s).days))
