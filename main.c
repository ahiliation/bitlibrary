/* 

Author : Jeffrin Jose T. <ahiliation@yahoo.co.in>

This program comes with absolutely no warranty to 
the  extent permitted by applicable law */

#include <stdio.h>

int main()
{

 int option;


  printf("Sign detection [1] \n");
  printf("Power of two [2] \n");
  printf("Counting No. of bits set [3] \n");
  printf("Set or clear bits without branching[4] \n");
  printf("Find maximum value[5] \n");
  printf("Finding least common multiple[6] \n");
  printf("Finding the greatest commom divisor[7] \n");
  printf("Finding if a number is an Armstrong number or not[8] \n");
  printf("Finding if a given number is prime number[9]  \n");
  printf("Finding the number of twin prime numbers[10] \n");
  printf("Finding if a number is palindrome or not[11] \n");
  printf("Finding prime factor of a number[12] \n");
  printf("Finding the value of M^N[13] \n");
  printf("Finding factorial of a number[14] \n");
  printf("Finding the sum of the series 1! + 2! +...+N! [15] \n");
  printf("Finding the sume of the series 1 + 2 +...+N [16] \n");
  printf("Finding Parity of an Integer [17] \n");
  printf("Finding the biggest among three numbers [18] \n");
  printf("Finding the sum of even and odd numbers up to a number N [19] \n");
  printf("Finding the sum and number of integers divisible by 5 [20] \n");
  printf("Swapping Values [21] \n");
  printf("Finding the decimal value for a binary [22] \n");
  printf("Finding the reverse of an integer [23] \n");
  printf("Finding a way for user authentication [24]: \n");
  printf("Finding the binary equivalent of a decimal number and count no. of 1's in binary number [25] \n");
  printf("Finding if a number is a leap year [26] \n");
  printf("Swapping Values using bitwise XOR [27] \n");
  printf("Finding the year week and days from no. of days given [28] \n");
  printf("Finding inventory [29] \n");
  printf("Finding the result of a number multiplied by 4 using a bitwise operator [30] \n");
  printf("Finding among natural numbers the sum of multiples of 3 and 5 below 1000 [31] \n");
  printf("Option: ");


 scanf("%d",&option); 

  switch(option)
 {
  case  1 :
    sdetect();
    break; 
  case  2 :
    poweroftwo();;
    break; /* optional */

  case 3 :
    cbs();
    break;

  case 4:
    socbwb();
    break;

 case 5:
   findmaxv();
   break;

 case 6:
   lcm();
   break;

 case 7:
   gcd();
   break;

 case 8:
   armstrong();
   break;

 case 9:
   prime();
   break;

 case 10:
 twinprime();
 break;

 case 11:
 palindrome();
 break;

 case 12:
   primefactor();
   break;

 case 13:
   power();
   break;

 case 14:
   factorial();
   break;

 case 15:
   ssof();
   break;

 case 16:
   sonn();
   break;

 case 17:
   evenodd();
   break;

 case 18:
   bignum();
   break;

 case 19:
   sumevenodd();
   break;

 case 20:
   numberdivi();
   break;

 case 21:
   swap_values();
   break;

 case 22:
   btd();
   break;

 case 23:
   revint();
   break;

 case 24:
   uauth();
   break;

 case 25:
   dtob();
   break;

 case 26:
   leapyr();
   break;

 case 27:
   swapxor();
   break;

 case 28:
   ywd();
   break;

 case 29:
   inventory();
   break;

 case 30:
   multbitwise();
   break;

 case 31:
   sofmul();
   break;
    /* default : */
   
 }

}
