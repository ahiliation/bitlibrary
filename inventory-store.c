/* Part of this program is copied from http://www.sanfoundry.com/c-program-inventory-items-store/  */

#include <stdio.h>

inventory()
{

struct date
{
  int day;
  int month;
  int year;
};

struct details
{

  char name[20];
  int price;
  int code;
  int qty;
  struct date mfg;
};

 struct details item[50];
 int n, i;

 printf("Enter the number of items:");
 scanf("%d",&n);
 fflush(stdin);

 for ( i = 0; i < n ; i++ )
   {
     fflush(stdin);
     printf("Item Name : ");
     scanf("%s",&item[i].name);
     fflush(stdin);
     printf("Item Code : ");
     scanf("%d",&item[i].code);
     fflush(stdin);
     printf("Quantity : ");
     scanf("%d",&item[i].qty);
     fflush(stdin);
     printf("Price : ");
     scanf("%d",&item[i].price);
     fflush(stdin);
     printf("Manufacturing date(dd-mm-yyyy): \n");
     scanf("%d-%d-%d", &item[i].mfg.day, &item[i].mfg.month, &item[i].mfg.year);
   }
 printf("             *****  INVENTORY ***** \n");
 printf("-----------------------------------------------------------------\n");
 printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE | MFG.DATE \n");
 printf("------------------------------------------------------------------\n");
 for (i = 0; i < n; i++)
   printf("%d     %-15s        %-d          %-5d     %-5d %d/%d/%d \n", i + 1, item[i].name, item[i].code, item[i].qty,
	  item[i].price, item[i].mfg.day, item[i].mfg.month,
	  item[i].mfg.year);
 printf("------------------------------------------------------------------\n");



}

/* [ fflush is thread-safe ] http://stackoverflow.com/questions/261683/what-is-meant-by-thread-safe-code */
/* http://stackoverflow.com/questions/1618967/inventory-supply-chain-procurement-management-and-computer-science-general-h */
/* http://stackoverflow.com/questions/22936112/fifo-implementation-in-inventory-using-sql */
