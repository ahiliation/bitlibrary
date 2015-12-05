# There exists exactly one Pythagorean triplet for which a + b + c = 1000.
# Find the product abc.
# This program is copied from http://code.jasonbhill.com/python/project-euler-problem-9/


import time
 
def prod_triplet_w_sum(n):
    for i in range(1,n,1):
        for j in range(1,n-i,1):
            k = n-i-j
            if i**2+j**2==k**2:
                return i*j*k
    return 0
 
start = time.time()
product = prod_triplet_w_sum(1000)
elapsed = (time.time() - start)
 
print "found %s in %s seconds" % (product,elapsed)
