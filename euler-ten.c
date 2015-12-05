// Louis Casillas, oxaric@gmail.com 
// Further Edits: Fahad Uddin
// Modified a little by Jeffrin Jose T <jeffrin@rocketmail.com>
// Euler Problem #10
// Find the sum of all the primes below two million.

#include <stdio.h>
#include <math.h>
char isPrime( int num )
{
   if ((num % 3) == 0 )
   {
      return 0;
   }

   int i = 0;
   int r = floor ( sqrt( num ) );

   int f = 5;
   while (f <= r)
   {
      if ((num % f) == 0)
      {
         return 0;
      }
      if ((num % (f + 2)) == 0)
      {
         return 0;
      }
      f += 6;
   }
   return 1;
}
#define UPTO 2000000
int main(void)
{
   int i = 5;
   double sum_of_primes = 5;
   while (i < UPTO)
   {
      if ( isPrime( i ) )
      {     
         sum_of_primes += i;
      }
      i += 2;
   }
   printf( "The sum of the primes is: %f \n", sum_of_primes );
   return 0;
}
