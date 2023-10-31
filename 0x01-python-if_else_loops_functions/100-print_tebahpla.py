#!/usr/bin/python3
for n in range(25, -1, -1):
    c = n +ord('A')
    if n % 2 ==1:
        c += 32
    print("{:c}".format(c), end="")
