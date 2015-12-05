/* part of work copied from http://www.sanfoundry.com/c-program-integer-odd-or-even/ */

#include <stdio.h>

evenodd()
{

long  int ival, remainder;
  printf("Enter an integer: ");
  scanf("%ld",&ival);
  remainder = ival % 2;
  if ( remainder == 0 )
    printf("%ld is an even integer \n",ival);
  else
    printf("%ld is an odd integer \n",ival);
}
