#include<stdio.h>
#include<conio.h>

int main(){

	int choice;
	clrscr();

	textcolor(CYAN);
	gotoxy(18,2);  cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(18,3);  cprintf("³                                           ³");
	gotoxy(18,4);  cprintf("³                                           ³");
	gotoxy(18,5);  cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

	textcolor(YELLOW + BLINK);
	gotoxy(20,3);  cprintf("               W E L C O M E              ");
	gotoxy(20,4);  cprintf("Computerized Arithmetic Operations System ");

	gotoxy(30,8);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(30,9);  printf("³ M A I N    M E N U ³");
	gotoxy(30,10); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(30,11); printf("³ [1] Addition       ³");
	gotoxy(30,12); printf("³ [2] Subtraction    ³");
	gotoxy(30,13); printf("³ [3] Multiplication ³");
	gotoxy(30,14); printf("³ [4] Division       ³");
	gotoxy(30,15); printf("³ [5] Modulus        ³");
	gotoxy(30,16); printf("³ [0] Exit Program   ³");
	gotoxy(30,17); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

	gotoxy(24,19);
	printf("Please enter your desired number: ");
	scanf("%d",&choice);

	getch();
	return 0;}