#include <stdio.h>

factorial()
{

  int p = 1;
  int i = 1;
  int n;
  printf("Enter a Number greater than 0 \n");
  scanf("%d",&n);
  while ( i <= n)
    {
    p = p * i;
    i = i + 1;
    }
   
  printf("Factorial of the input is %d \n",p);
} 
