#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

main()
{
 int x, y,seat_num,z=1;
 char c,d,name [40],addr [50],sex [10],age [5];

 clrscr();
 while(z==1)
 {
  clrscr();
  printf("[D]isplay\n");
  printf("[R]eserved\n");
  printf("[I]nquire\n");
  printf("[E]xit\n");
  printf("Enter your choice: ");

  d=getche();

  switch(toupper(d))
  {
   case 'D':
   {
    clrscr();
    printf("             SEAT CODES\n\n");

    for(x=1; x<=10; x++)
    {
     printf("[%2d1]  [%2d2]           [%2d3]  [%2d4]\n\n", x, x, x, x);
    }
     printf("\nPRESS ANY KEY TO CONTINUE...");
     getch();
    }
    break;

    case 'R':
    {
     begin:
     printf("\n\nEnter name: ");
     gets(name);
     printf("\nEnter address: ");
     gets(addr);
     printf("\nEnter sex: ");
     gets(sex);
     printf("\nEnter age: ");
     gets(age);
     printf("\nSelect location: ");
     scanf("%d", &seat_num);
     printf("\nYOUR RESERVATION WILL NOW BE SAVED\n");
     printf("DO YOU WANT TO CONTINUE? [Y/N]? ");
     c=getche();
     if(c=='y')
     {
      printf("\n\nReservation is now saved!\n\n");
     }
     else
     {
      printf("Reservationa aborted!\n\n");
     }
     printf("DO YOU WANT ANOTHER RESERVATION [Y/N]?");
     c=getche();
     if(c=='y')
     {
      goto begin;
     }
    }
    break;

    case 'I':
    {
     clrscr();

     for(x=1; x<=10; x++)
     {
      printf("[%2d1]  [%2d2]           [%2d3]  [%2d4]\n\n", x, x, x, x);
     }
     printf("Enter the number of seat you want to inquire: ");
     scanf("\n%d",&seat_num);
     printf("\n%s",name);
     printf("\n%s",addr);
     printf("\n%s",sex);
     printf("\n%s",age);
     getch();
    }
    break;

    case 'E':
    {
     clrscr();
     gotoxy(17,12);
     printf("YOU ARE NOW ABOUT TO LEAVE.");
     gotoxy(17,13);
     printf("PRESS ANY KEY TO EXIT...");
     getch();
     z=0;
    }
    break;

    default:
    {
     clrscr();
     gotoxy(25,12);
     printf("THE CHOICE YOU'VE ENTERED IS NOT VALID!");
     getch();
    }
   }
  }
}