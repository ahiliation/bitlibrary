/*
This file is part of BeautifulWork Project

Author for C Port : Jeffrin Jose T. <ahiliation@yahoo.co.in>
Copyright (c) 2014. 
This program comes with absolutely no warranty to the extent permitted by applicable law.

This code is worked on from :
http://algorithmsandproblems.blogspot.in/2013/04/lcm-least-common-multiplier.html


*/

#include <stdio.h>

lcm() 

{

  int n1,n2,r;
  r = 1;
  int  i = 2;
  int flag;

  printf("Enter numbers for finding least common multiple: ");
  scanf("%d %d",&n1,&n2);

  while  ( (n1 != 1) &&  (n2 != 1))
    {
      flag = 0;
      if (( n1 % i) == 0) {                                                                                                   
	n1 = n1/i;                                                                                                      
	flag = 1;                                                                                                       
		}                                                                                                          
      if ( (n2 % i) ==  0) {                                                                                                 
	n2 = n2/i;                                                                                                      
	flag = 1;                                                                                                       
		}                                                                                                        
                                                                                                                            
      if ( flag == 1 ) {                                                                                                   
	r = r * i;                                                                                                      
		}
      else
	{                                                                                                                   
	  i = i + 1;                                                                                                      
		}                                                                                                           
    }                                                                                                            
  r = r * n1 * n2;

  printf("The least common multiple is %d \n",r);

}
