/* Part of this program copied from http://www.sanfoundry.com/c-program-multiply-number-4-using-bitwise-operators/ */

#include <stdio.h>

multbitwise()
{

  long number;
  printf("Enter an integer: ");
  scanf("%ld",&number);
  number = number << 2;
  printf("Result is %ld \n",number);
}

/* http://stackoverflow.com/questions/4456442/interview-multiplication-of-2-integers-using-bitwise-operators */
/* http://www.geeksforgeeks.org/multiply-two-numbers-without-using-multiply-division-bitwise-operators-and-no-loops/ */
/* http://en.wikipedia.org/wiki/Bitwise_operation */

