/* This code is worked on from :
http://algorithmsandproblems.blogspot.in/2013/04/gcdgreatest-common-divisor-or.html

This file is part of BeautifulWork Project.


Author for GNU C Port : Jeffrin Jose T. <ahiliation@yahoo.co.in>
Copyright (c) 2014.

BeautifulWork Project comes with ABSOLUTELY NO WARRANTY, to the extent permitted by applicable law 

*/

#include <stdio.h>

gcd()
{

int a,b,r;

printf("Enter the two values for finding GCD: ");
scanf("%d  %d",&a,&b);


if ( a == b)
  {
    r = a;
    printf("GCD is : %d \n",r);
    return;
  }
 
while (a != b) 
{

  if ( a == 1)
    {  
  r = 1;
  printf ("GCD is: %d\n",r);  
return;
    }
  if ( b == 1 )
    {
      r = 1;
      printf ("GCD is: %d\n",r);
      return;
    }

  if ( a > b )
    {                                                                                                           
      a = a - b;                                                                                                      
    }
  else 
    {                                                                                                                        
      b = b - a;                                                                                                      
    }                                                                                                             
 }

 r = a;
 printf ("GCD is: %d\n",r);
 return;
}
