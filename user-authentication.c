/* 

Part of work copied from http://www.sanfoundry.com/c-program-illustrate-user-authentication/ 
Changed from gets() to fgets() which makes the program more secure.
Changed from getchar() to getc().
 
*/




#include <stdio.h>

uauth()
{
  char password[10], username[10], ch;
  int i;
  printf("Enter user name:");
  fgets(username,10,stdin); 
  printf("Enter the password <any 8 characters>:");
  for (i = 0; i < 8; i++)
    {
      ch = getc(stdin);
      password[i] = ch;
      ch = '*';
      printf("%c",ch);
    }
  password[i] = '\0';
  printf("\n Your password is :");
  for (i = 0; i < 8 ; i++)
    {
      printf("%c",password[i]);
    }

}

/* http://en.wikipedia.org/wiki/Standard_streams */
/* http://www.dummies.com/how-to/content/how-to-use-the-fgets-function-for-text-input-in-c-.html */
