#include <stdio.h>

  twinprime()
  {
    int k = 0;
    int n = 0;
    int Ub = 8;
    int Lb = 1;
    int twini = Lb;
    int twinr;
    int statetp = 5;
    int a[8] = {1,2,3,4,5,6,7,8};

    if ((twini % 2) == 0)
      twini += 1;
    while ((twini + 2) < Ub )
      {
	prime(twini,twinr,statetp);
	if ( twinr == 1)
	  {
	    prime((twini+2),twinr,statetp);
	  if ( twinr == 1)
	    {
	    a[k] = twini;
	  k = k + 1;
	  a[k] = twini + 2;
	  k = k + 1;
	  n = n + 1;
	    }
	  }
	twini = twini + 2;
      }
  }
