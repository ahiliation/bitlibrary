/* This file is worked on from http://www.s-anand.net/euler.html , Solution of Problem 4 

A palindromic number reads the same both ways. The largest palindrome made from the product 
of two 2-digit numbers is 9009 = 91 x 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

int n = 0, a = 999, b;

for ( a ; 100 ; a-- )
  {
    for ( a ; 100 ; b-- )
      {
	x = a * b;
	if ( x > n )

