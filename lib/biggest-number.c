/* part of work copied from http://www.sanfoundry.com/c-program-biggest-3-numbers  */
/* inputs - [1,1,1] [-1,-2,-3] */





#include <stdlib.h>
#include <stdio.h>

bignum()
{

  int num1, num2, num3;
  printf("Enter The values num1 num2 num3: ");
  scanf("%d %d %d",&num1,&num2,&num3);
  if ( (num1 == num2) && (num2 == num3) )
    {
      printf("All the numbers are the same \n");
      exit(0);
    } 

  if ( num1 > num2 )
    {
      if ( num1 > num3 )
	{
	  printf("%d is the greatest number \n",num1);
	}
      else
	{
	printf("%d is the greatest number \n",num3);
	}
    }
  else if ( num2 > num3 )
    printf ("%d is the greatest number \n",num2);
  else
    printf("%d is the greatest number \n",num3);
}
