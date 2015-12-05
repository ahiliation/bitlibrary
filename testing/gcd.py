# Algorithm worked on from :
# http://algorithmsandproblems.blogspot.in/2013/04/gcdgreatest-common-divisor-or.html

# This file is part of BeautifulWork Project.

# Author for Python  Port : Jeffrin Jose T. <ahiliation@yahoo.co.in>
# Copyright (c) 2014.

# BeautifulWork Project comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law 


print ("Enter the two values for finding GCD: ")

a = input("Enter the value of 'a': ")
b = input("Enter the value of 'b': ")


if  a == b:
    r = a
 
while a != b: 
    if a == 1:  
        r = 1  

    if b == 1:
        r = 1

    if a > b:                                                                                                           
        a = a - b                                                                                                      
    else:                                                                                                                            b = b - a                                                                                                                                                                                               

r = a
print r 
