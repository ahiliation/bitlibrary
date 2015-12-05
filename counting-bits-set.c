#include <stdio.h>


cbs ()

{
unsigned int v; /* count the number of bits set in v */
unsigned int c; /* c accumulates the total bits set in v */

printf("Enter v");
scanf("%u",&v);


for (c = 0; v ; c++)
  {
    v = v & (v - 1); /* clear the least significant bit set */
  }


printf("The number of bits set in v is %u \n",c);

}
