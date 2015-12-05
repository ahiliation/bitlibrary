/*
 * Project Name:            Problem Six
 * Solution Name:           Problem Six
 * Original creation date:  06/07/2011
 * Edit date:               18/01/2013
 * Programmer name:         Jamie Taylor (aka "GaProgMan")
 * File name:               ProblemSix.c
 * 
 * Purpose of this project:
 *   Problem Six, from Project Euler.
 * URL: http://projecteuler.net/index.php?section=problems&id=6
 *   The sum of the squares of the first ten natural numbers is,
 *    1^2 + 2^2 + ... + 10^2 = 385
 *   The square of the sum of the first ten natural numbers is,
 *    (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *   Hence the difference between the sum of the squares of the first
 * ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 * Find the difference between the sum of the squares of the first
 * one hundred natural numbers and the square of the sum.
 *
 *    GNU Copyright information
 *    Copyright 2011 Jamie Taylor <jamie@taylorj.org.uk>
 *
 *    This program is free software; you can redistribute
 *        it and/or modify it under the terms of the GNU General
 *        Public License as published by the Free Software
 *Foundation; either version 2 of the License, or (at
 *your option) any later version.
 *
 *This program is distributed in the hope that it will
 *be useful, but WITHOUT ANY WARRANTY; without even the
 *implied warranty of MERCHANTABILITY or FITNESS FOR A
 *PARTICULAR PURPOSE.  See the GNU General Public
 *License for more details.
 *
 *You should have received a copy of the GNU General
 *Public License along with this program; if not, write
 *to the Free Software Foundation, Inc., 51 Franklin
 *Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
 
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main () {
  unsigned long long sumOfSquares = 0;
  unsigned long long squareOfSums = 0;
  long long difference = 0;
  int i = 1;
  do {
    sumOfSquares += pow((double)i, 2);
    squareOfSums += i;
    i++;
  } while ( i < 101 );
 
  squareOfSums = pow ((double)squareOfSums, 2);
  difference = squareOfSums - sumOfSquares;
  
  cout << "Sum of all squares: " << sumOfSquares << endl;
  cout << "Square of all sums: " << squareOfSums << endl;
  
  cout << "The difference between the sum of all squares and the square "
       << "of all sums is:\n" << difference << endl;
  char ch;
  /*  cin >> ch; */
  return 0;
}

/* Small changes to this file by <ahiliation@yahoo.co.in> Jeffrin Jose T. */
/* The pow() function returns the value of x raised to the power of y. */
