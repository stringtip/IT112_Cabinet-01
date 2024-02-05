#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(){

	int x, y;

	for(x=35, y=41; x>=1, y<=75; x--, y++){
		clrscr();
		textcolor(x + 2);
		gotoxy(x,13);
		cprintf("Hello");
		gotoxy(y,13);
		cprintf("World");
		delay(100);}

	for(x=1, y=75; x<=35, y>=41; x++, y--){
		clrscr();
		textcolor(x + 2);
		gotoxy(x,13);
		cprintf("Hello");
		gotoxy(y,13);
		cprintf("World");
		delay(100);}

	for(x=13, y=13; x>=1, y<=25; x--, y++){
		clrscr();
		textcolor(x + 2);
		gotoxy(35,x);
		cprintf("Hello");
		gotoxy(41,y);
		cprintf("World");
		delay(100);}

	for(x=1, y=25; x<=13, y>=13; x++, y--){
		clrscr();
		textcolor(x + 2);
		gotoxy(35,x);
		cprintf("Hello");
		gotoxy(41,y);
		cprintf("World");
		delay(100);}

	textcolor(WHITE);
	gotoxy(30,12); cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(30,13); cprintf("³                   ³");
	gotoxy(30,14); cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

	textcolor(RED + BLINK);
	gotoxy(35,13); cprintf("Hello World");
	gotoxy(80,25); getch(); return 0;}



