/* part of work copied from http://www.sanfoundry.com/c-program-binary-number-into-decimal/  */
#include <stdio.h>

btd()
{
  int num, binary_val, decimal_val = 0, base = 1, rem;
  printf("Enter a binary number : ");
  scanf("%d",&num);
  binary_val = num;
  while ( num > 0 )
    {
      rem = num % 10;
      decimal_val = decimal_val + rem * base;
      num = num / 10;
      base = base * 2;
    }
  printf("The binary number is : %d \n",binary_val);
  printf("It's decimal equivalent is:  %d \n",decimal_val);
}


/* http://www.electronics-tutorials.ws/binary/bin_2.html */
/* http://numbermonk.com/ */
/* remainder -- a part that is still to come to make things perfect
   (or make something working fully) */
/* http://www.mathsisfun.com/definitions/remainder.html */
/* "num" is considered as a number which has to be broken
   into 10 pieces beacuse the resulting number is built
   using  a maximum of 10 building blocks. */
