#include<stdio.h>
#include<conio.h>

int main(){

	int choice;
	clrscr();

	textcolor(CYAN);
	gotoxy(18,2);  cprintf("旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�");
	gotoxy(18,3);  cprintf("�                                           �");
	gotoxy(18,4);  cprintf("�                                           �");
	gotoxy(18,5);  cprintf("읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�");

	textcolor(YELLOW + BLINK);
	gotoxy(20,3);  cprintf("               W E L C O M E              ");
	gotoxy(20,4);  cprintf("Computerized Arithmetic Operations System ");

	gotoxy(30,8);  printf("旼컴컴컴컴컴컴컴컴컴커");
	gotoxy(30,9);  printf("� M A I N    M E N U �");
	gotoxy(30,10); printf("쳐컴컴컴컴컴컴컴컴컴캑");
	gotoxy(30,11); printf("� [1] Addition       �");
	gotoxy(30,12); printf("� [2] Subtraction    �");
	gotoxy(30,13); printf("� [3] Multiplication �");
	gotoxy(30,14); printf("� [4] Division       �");
	gotoxy(30,15); printf("� [5] Modulus        �");
	gotoxy(30,16); printf("� [0] Exit Program   �");
	gotoxy(30,17); printf("읕컴컴컴컴컴컴컴컴컴켸");

	gotoxy(24,19);
	printf("Please enter your desired number: ");
	scanf("%d",&choice);

	getch();
	return 0;}