#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
main()
{
int x,y,z,q,set;

char the_command,letter,

			num[20],
			num1[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},
			info1[21][150]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			info2[21][150]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			info3[21][50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			info4[21][50]={"EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY","EMPTY"};


do
{
clrscr();
gotoxy(25,1);
printf("SET POSITION");
	for (y=1;y<=10;y++)
	{
	gotoxy(18,y+2);
	printf("[%d]",y);
	gotoxy(42,y+2);
	printf("[%d]",y+10);
	delay(10000);
	}

printf("\n\n\n[R]eserve [L]ist [E]dit E[X]it ");
the_command=getch();
	{
	if(toupper(the_command)=='R')
		{
		printf("\nSET NUMBER:");
		scanf("%d",& set);

		if (set!=num[set])
			{
			flushall();
			printf("NAME:");
			gets(info1[set]);
			printf("PLACE:");
			gets(info2[set]);
			printf("AGE:");
			gets(info3[set]);
			printf("ID#:");
			gets(info4[set]);
			clrscr();
			gotoxy(25,15);
			printf("*****INFORMATION SAVE******");
			getch();
			}
		else
			{
			clrscr();
			gotoxy(12,5);
			{
			printf("THIS SET IS ALREADY OCCUPIED BY:");
			printf("\nNAME:%s",info1[set]);
			printf("\nPLACE:%s",info2[set]);
			printf("\nAGE:%s",info3[set]);
			printf("\nID#:%s",info4[set]);
			getch();
			}
			}
		num[set]=set;
		}

	if (toupper(the_command)=='L')
		{
		clrscr();
			{
			printf("Set Occupied:\n ");
			for(q=1;q<=20;q++)
				{
				printf("\nSET#:%d :NAME:%s PLACE:%s AGE:%s ID#:%s",num1[q],info1[q],info2[q],info3[q],info4[q]);
				delay(10000000000);
				}
			}
		getch();
		}
	if (toupper(the_command)=='E')
		{
		clrscr();
		printf("SPECIFY SET POSITION:    ");
		scanf("%d",&set);
		printf("\n\n\n[a]NAME [b]PLACE [c]AGE [d]ID#");
		letter=getch();
		flushall();
		 if (toupper(letter)=='A')
			{printf("\nSPECIFY NAME: ");
			gets(info1[set]);
			}
		 if (toupper(letter)=='B')
			{
			printf("\nSPECIFY PLACE: ");
			gets(info2[set]);}
		 if (toupper(letter)=='C')
			{			printf("\nSPECIFY AGE: ");
			gets(info3[set]);
			}
		 if (toupper(letter)=='D')
			{
			printf("\nSPECIFY ID NUMBER: ");
			gets(info4[set]);
			}
		 else
			{clrscr();
			gotoxy(25,15);
			printf("INCORRECT INPUT");}

			gotoxy(25,15);
			printf("FILE SUCCESSFULLY EDIT");
		getch();
		}


	}

}	while(toupper(the_command)!='X');


return(0);
}