/* Part of this work is copied from http://www.sanfoundry.com/c-program-to-reverse-a-given-number/ */

#include <stdio.h>

revint()
{

  long num, reverse = 0, temp, remainder;
  printf("Enter the number \n");
  scanf("%ld",&num);
  temp = num;
  while ( num > 0 )
    {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      num /= 10;
    }
  printf("Given number = %ld \n", temp);
  printf("It's reverse = %ld \n", reverse);
}

/* http://stackoverflow.com/questions/15349723/reversing-an-integer-in-java-using-a-for-loop  */
/* http://math.stackexchange.com/questions/480068/how-to-reverse-digits-of-an-integer-mathematically */
