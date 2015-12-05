/*  This file is  worked ( mostly copy and paste ) from from http://www.programminglogic.com/solution-to-project-euler-5/ 
 Notice that if the number is evenly divisible by all numbers from 11 to 20 it's  also divisible by all numbers 
 from 2 to 10.
*/

#include <stdio.h>

int main(){
  int i,j,counter;
  for (i=10;i<1000000000;i++){
    counter=0;
    for (j=11;j<21;j++){
      if (i%j==0)
	counter++;
    }
    if (counter==10){
      printf("%d \n",i);
      break;
    }
  }
  return 0;
}
