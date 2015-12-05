#include <stdio.h>
#include <math.h>

prime(int primei,int primer,int statep)
{
  int j,n;
  primer = 1;
  if ( statep != 5 )
    {
  printf("Result is 0 if the given number is not prime and 1 otherwise \n"); 
  printf("Enter any positive integer which is greater than or equals to zero: ");
  scanf("%d",&n);
    }
 if ((n == 1) || (n == 2))
   {
     if ( statep != 5 )
    printf("%d \n",primer);    
  return primer;
   }
  primei = 2;
  j = sqrt(n);

  while ( primei <= j )
    {
    if ((n % primei ) == 0)
      {
      primer = 0;
      if ( statep != 5 )
      printf("%d \n",primer);
  return primer; 
      }
    primei = primei + 1;
    }
  if ( statep != 5 )
  printf("%d \n",primer);
  return primer;
}
