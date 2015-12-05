#include <stdio.h>

socbwb ()
{
  typedef int bool;
  bool f; /* conditional flag */
  unsigned int m; /* the bit mask */
  unsigned int w; /* the word to modify: if (f) w |= m; else w &= ~m; */

  printf("Enter the word to modify ");
  scanf("%u",&w);

  printf("Enter the bit mask ");
  scanf("%u",&m);

  /* w = w ^ ((-f ^ w) & m ); */

  /* OR, for superscalar CPUs: */

  w = (w & ~m) | (-f & m);

  printf("Modified value is %u \n",w);

}
