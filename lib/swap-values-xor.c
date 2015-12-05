/* Part of this program is copied from http://www.sanfoundry.com/c-program-swap-numbers-bitwise-xor-operation/  */

#include <stdio.h>

swapxor()
{
  long i, k;
  printf("Enter two integers: ");
  scanf("%ld %ld", &i, &k);
  printf("\n Before swapping i =%ld and k = %ld", i, k);
  i = i ^ k;
  k = i ^ k;
  i = i ^ k;
  printf("\n After Swapping i =%ld and k = %ld \n", i, k);
}

/* http://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_XOR_.22.5E.22 */
/* http://en.wikipedia.org/wiki/XOR_swap_algorithm#The_algorithm */
/* http://en.wikipedia.org/wiki/XOR_swap_algorithm#Reasons_for_use_in_practice */
