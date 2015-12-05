/* Part of work is copied from http://www.sanfoundry.com/c-program-decimal-binary-count-1-binary/  */

#include <stdio.h>

dtob()
{
  long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
  printf("Enter a decimal integer \n");
  scanf("%ld",&num);
  decimal_num = num;
  while ( num > 0)
    {
      remainder = num % 2;
      /* to count the number of 1's */
      if ( remainder == 1 )
	no_of_1s++;
      binary = binary + remainder * base;
      num = num / 2;
      base = base * 10;
    }
  printf(" Input number is %ld\n",decimal_num);
  printf(" It's binary equivalent is %ld \n",binary);
  printf("No. of 1s in the binary number is %ld\n",no_of_1s);
}
