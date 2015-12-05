/* determining if an integer is a power of 2 */
#include <stdio.h>

unsigned int v;  /* we want to see if v is a power of 2 */

typedef int bool;
bool f;

poweroftwo ()
{

printf("enter number");
scanf("%d",&v);
f = ( v & ( v - 1) ) == 0;
printf("the result is %d \n",f);

}
