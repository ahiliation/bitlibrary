'''
This file is worked on from http://www.s-anand.net/euler.html  problem 1.

Find the sum of all the multiples of 3 or 5 below 1000 

'''

n = 0
for i in xrange(1,1000):
    if not i % 5 or not i % 3:
        n = n + i
print n
