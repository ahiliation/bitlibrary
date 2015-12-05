/* Part of this program is copied from http://www.sanfoundry.com/c-program-check-year-leap/  */

#include <stdio.h>

leapyr()
{
  int year;
  printf("Enter a year: ");
  scanf("%d",&year);
  if ((year % 400) == 0)
    printf("%d is a leap year \n",year);
  else if ((year % 100) == 0)
    printf("%d is not a leap year \n",year);
  else if ((year % 4) == 0)
    printf("%d is a leap year \n",year);
  else 
    printf("%d is not a leap year \n",year);
}

/* http://www.calendar-365.com/leap-years.html  */
/* http://en.wikipedia.org/wiki/Leap_year#Algorithm */
/* http://forums.udacity.com/questions/100018638/leap-year-algorithm-in-cs101-ps22-2 */
/* http://www.quora.com/How-does-Tomohiko-Sakamotos-Algorithm-work */
/* http://www.codeproject.com/Articles/7358/Ultra-fast-Algorithms-for-Working-with-Leap-Years */
/* http://www.st.ewi.tudelft.nl/~arie/papers/klint.pdf */
