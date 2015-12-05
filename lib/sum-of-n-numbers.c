#include <stdio.h>

sonn()
{

  int S, I, N;
  S = 0;
  I = 0;
  printf("Enter the number N: ");
  scanf("%d",&N);
  while ( I <= N )
    {
      S = S + I;
      I = I + 1;
    }
  printf("Sum of the series is %d \n",S);
}
