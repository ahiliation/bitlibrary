/* Part of this program is copied from http://www.sanfoundry.com/c-program-days-in-years-weeks-days/  */

#include <stdio.h>
#define DAYSINWEEK 7

ywd()
{
  int ndays, year, week, days;
  printf("Enter the number of days: ");
  scanf("%d",&ndays);
  year = ndays/365;
  week = ( ndays % 365 ) / DAYSINWEEK;
  days = ( ndays % 365 ) % DAYSINWEEK;
  printf("%d is equivalent to %d year(s)  %d week(s) and %d day(s) \n", ndays, year, week, days);
}

/* http://www.forallsecure.com/sources/5242 */
/* https://stuff.mit.edu/afs/sipb/contrib/linux/drivers/rtc/rtc-lib.c */
/* http://www.cs.fsu.edu/~baker/devices/lxr/http/source/linux/fs/ncpfs/dir.c */
