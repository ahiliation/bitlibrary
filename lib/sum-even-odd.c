/* part of work copied from http://www.sanfoundry.com/c-program-sum-odd-even-numbers/ */

#include <stdio.h>

sumevenodd()
{

  long  int N,i,even_sum = 0, odd_sum = 0,remainder;
  printf("Enter Number: ");
  scanf("%ld",&N);
  for (i = 0; i<= N; i++)
    {
  remainder = i % 2;
  if ( remainder == 0 )
    even_sum = even_sum + i;
  else
    odd_sum = odd_sum + i;
    }

  printf("The sum of even numbers is: %ld \n",even_sum);
  printf("The sum of odd numbers is : %ld \n",odd_sum);
}
