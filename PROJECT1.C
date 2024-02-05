/*Group 1 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

main()
{
	char name[80], age[80], addr[80], sex[10];
	char choice;
	int x, y;
	int BSCpE=1;
	while(BSCpE==1)
   {
    clrscr();
		printf ("[D]isplay\n");
		printf ("[R]eserved\n");
		printf ("[Q]uery\n");
		printf ("[E]xit\n");
		printf ("choose one:\n ");

		choice = getche();
		switch(tolower(choice))

	 {
		case 'd':
		{
			clrscr();
			printf("Welcome");
			printf("The seat of CpE flight.\n");

			for(x=1;x<=10;x++)
			{
				printf ("[%2d.a] [%2d.b] [%2d.c] [%2d.d]\n\n",x,x,x,x);
			}
		 getch();
      }
       break;

		case 'r':
		{

			clrscr();

			printf ("Enter name: ");
			gets(name);
			printf ("your age: ");
			gets(age);
			printf ("gender: ");
			gets(sex);
			printf ("address: ");
			gets(addr);
			printf("The information is save");
			getch();
		}
		break;

		case 'q':
		{
			clrscr();
			for(x=1; x<=10;x++)
			{
				printf ("[%2d.a] [%2d.b] [%2d.c] [%2d.d]\n",x,x,x,x);
			}
				printf("Enter seat number: ");
				scanf("%d",&y);
				puts(name);
				puts(age);
				puts(addr);
				puts(sex);
				getch();
			}
			break;

			case 'e':
			{
				clrscr();
				printf("You are about to exit");
				printf("\nThank You...Bye!!!");
				getch();
				BSCpE=0;
			}
			break;

			default:
			{
				printf("Hello your wrong");
				printf ("\nPls....enter valid choice!");
				getch();
			}
		}
	}
getch();
}