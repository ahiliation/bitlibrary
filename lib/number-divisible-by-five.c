/* work copied from http://www.sanfoundry.com/c-program-number-divisible-by-5/  */


#include <stdio.h>

numberdivi()
{

  int i, num1, num2, count = 0, sum = 0;
  printf("Enter the value of num1 and num2 : ");
  scanf("%d %d",&num1,&num2);
  for (i = num1; i < num2 ; i++)
    {
      if ((i % 5) == 0)
	{
	  printf("%3d,",i);
	  count++;
	  sum = sum + i;
	}
    }
  printf("\n Number of integers divisible by 5 between %d and %d = %d \n",num1,num2,count);
  printf("The sum of all integers that are divisible by 5 = %d\n",sum);
}


/* http://en.wikipedia.org/wiki/Divisibility_rule  */
/* http://stackoverflow.com/questions/18473730/algorithm-in-hardware-to-find-out-if-number-is-divisible-by-five  */
