/*
This file is part of BeautifulWork Project
This program is worked on from : http://www.programiz.com/c-programming/examples/check-armstrong-number
This program comes with ABSOLUTELY NO WARRANTY to the extent permitted by applicable law.

*/

#include <stdio.h>

armstrong()
{

  int n, n1, rem, num=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  n1 = n;

  while ( n1 != 0 )
    {
      rem = n1 % 10;
      num+= rem * rem * rem;
      n1/= 10;
    }
  if (num == n)
    printf("%d is an Armstrong number \n",n);
  else
    printf("%d is not an Armstrong number \n",n);
}
