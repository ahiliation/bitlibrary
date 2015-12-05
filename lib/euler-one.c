/* This program has been worked on from http://www.s-anand.net/euler.html */

#include <stdio.h>

sofmul()
{
int n, i;
n = 0;

for (i = 0 ; i < 1000 ; i++) {
  if  ( !(i % 5) ||  !(i % 3) )
    n = n + i;
 }

printf("Sum of natural numbers which are the multiples of 3 and 5 below 1000 is %d \n", n);
}
