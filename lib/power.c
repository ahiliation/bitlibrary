#include <stdio.h>
#include <stdlib.h>


power()
{
  int r = 1;
  int i = 1;
  int m, n;
  printf("Enter the numbers M and N for doing M^N: ");
  scanf("%d %d",&m,&n);
  while ( i <= n )
    {
      if ( r == 0 )
	{
	  /*	printf("%d \n",i); */
	exit(EXIT_FAILURE);
	}
      r = r * m;
      i = i + 1;
    }

  printf("The result is %d \n",r);
}
