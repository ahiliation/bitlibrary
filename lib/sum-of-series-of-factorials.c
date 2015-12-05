#include <stdio.h>

ssof()
{

long  int I,N,F,J,S;
  I = 0;
  printf("Enter the number N: ");
  scanf("%ld",&N);
  while ( I <= N )
    {
      F = 1;
      J = 1;
      while ( J <= I )
	{
	F = F * J;
	J = J + 1;
	}
      S = S + F;
      I = I + 1;
    }
  printf("The sum of the series 1! + 2! +.....+N! is %ld \n",(S-1));
}
