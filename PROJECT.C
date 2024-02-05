/*GROUP 5
  ELEAZAR M. MAGRACIA
  JANICE D. BONGBONG
  ROLYSENT K. PAREDES
  WENCESTIVE J. BALITON
  ZALDE EMPHASIS
  RODNEY FERNANDEZ
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

main()
{
	int x, y, flag=1;
	char c, choice, name[50], add[50], sx[15];

	textcolor(BLUE);
	textbackground(WHITE);
	clrscr();
	gotoxy(17,10);
	cprintf("WELCOME TO ASIAN SPIRIT AIRLINES RESERVATION SYSTEM!!!");
	gotoxy(18,12);
	cprintf("VON VOYAGE!!! FLY AS ASIAN AND LAND AS SPIRIT!!!");
	gotoxy(20,14);
	cprintf("PRESS ANY KEY TO CONTINUE...");
	getch();


	while(flag==1){
	clrscr();
	printf("[d]isplay?\n");
	printf("[r]eserved?\n");
	printf("[q]uery?\n");
	printf("[e]xit?\n");
	printf("Your choice please: ");

	choice=getche();




	switch(toupper(choice))
	{
		case 'D':
		{
			clrscr();
			printf("THE SEATS OF FLIGHT 6778-CPE.\n");

			for(x=1; x<=10; x++)
			{
				printf("[%2d]    [%2d.1]        [%2d.2]   [%2d.3]\n\n", x, x, x, x);
			}
		printf("\nPRESS ANY KEY TO CONTINUE...");
		getch();
		}
		break;

		case 'R':
		{
			begin:
			clrscr();
			printf("Enter name: ");
			gets(name);
			printf("Enter address: ");
			gets(add);
			printf("Enter sex and age: ");
			gets(sx);
			printf("Select location: ");
			scanf("%d", &y);
			printf("Do YOU WANT TO SAVE THIS INFORMATION[Y/N]?\n\n");
			c=getche();
			if(c=='y')
			{
				printf("The information is saved!\n\n");
			}
			else
			{
				printf("The information was not save!\n\n");
			}
			printf("DO YOU WANT ANOTHER RESERVATION[Y/N]?");
			c=getche();
			if(c=='y')
			{
				goto begin;
				return 0;
			}
		}
		break;

		case 'Q':
		{
			clrscr();

			for(x=1; x<=10; x++)
			{
				printf("[%2d]   [%2d.1]     [%2d.2]   [%2d.3]\n\n", x, x, x, x);
			}
			printf("Enter the number of seat do you want to query: ");
			scanf("%d", &y);
			puts(name);
			puts(add);
			puts(sx);
			getch();
		}
		break;

		case 'E':
		{
			clrscr();
			gotoxy(17,12);
			printf("YOU ARE NOW ABOUT TO LEAVE.");
			gotoxy(17,14);
			printf("THANK YOU FOR USING THIS PROGRAM!");
			gotoxy(17,16);
			printf("PRESS ANY KEY TO EXIT...");
			getch();
			flag=0;

		}
		break;

		default:
		{
			clrscr();
			gotoxy(25,12);
			printf("PLEASE ENTER A CORRECT CHOICE!");
			getch();
		}
	}}

}












