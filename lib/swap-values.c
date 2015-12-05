/* part of work copied from http://www.sanfoundry.com/c-program-swap-values/  */
#include <stdio.h>

swap_values()
{
  int temp;
  int *ptr1, *ptr2;
  int a, b;
  printf("Enter integer values to be swapped: ");
  scanf("%d %d",&a,&b);
  ptr1 = &a;
  ptr2 = &b;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("Swapped values are: %d %d \n",a,b);
}

/* http://www.programmingsimplified.com/c-program-swap-two-numbers    */
/* http://betterexplained.com/articles/swap-two-variables-using-xor/  */
/* http://www.science.unitn.it/~fiorella/guidelinux/tlk/node27.html   */
