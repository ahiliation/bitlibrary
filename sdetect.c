/* detect if two integers have opposite signs */
#include <stdio.h>

int x , y;
typedef int bool;
bool f;

int sdetect()
{

  printf("Enter integers:\n");
  scanf("%d %d",&x,&y);


f = ((x ^ y) < 0);

if ( f == 1 ) {
printf("They have opposite signs\n");
 }
 else
   {
     printf("They have same signs\n");
   }

}
