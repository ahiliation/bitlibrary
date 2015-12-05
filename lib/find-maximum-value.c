/* 
This code is worked on from :
http://algorithmsandproblems.blogspot.in/2013/04/find-maximum-value.html
 
Author for C port : Jeffrin Jose T. <ahiliation@yahoo.co.in> 
Copyright (c) 2014.   

This program can be redistributed or modified under the terms of the                                                      
GNU General Public License as published by the Free Software Foundation.                                                  
This program is distributed without any warranty or implied warranty                                                      
of merchantability or fitness for a particular purpose.                                                                     See the GNU General Public License for more details.                      


The following program is for an array of ten numbers.

*/

#include <stdio.h>

findmaxv()
  {
  
  int a[10];
  int r;
  int i;
  int n;
  int j;

  r = 0;
  i = 1;

  /*   printf("Enter the number of elements in the array: ");
       scanf("%d",&n); */
  printf("enter values to the array \n");
  for (j=0;j < 10 ;j++)
    scanf("%d", &a[j]);

  while ( i < 10 )
    {
      if ( a[i] > a[r] ) 
	r = i;
      i = i + 1;
    }
printf("The maximum value is %d  \n",a[r]);
}

