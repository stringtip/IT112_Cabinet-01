#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	int cusid, conu;
	float chg, surchg = 0, gramt, netamt;
	char connm[25];
	clrscr();

	textcolor(YELLOW);
	gotoxy(2,4);  cprintf("   MOELCI-I Electric Rate Chart   ");

	textcolor(MAGENTA);
	gotoxy(2,5);  cprintf("旼컴컴컴컴컴컴컴컫컴컴컴컴컴컴컴커");
	gotoxy(2,6);  cprintf("�      Unit      �  Charge/Unit  �");
	gotoxy(2,7);  cprintf("쳐컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴캑");
	gotoxy(2,8);  cprintf("� 199 and below  �    @ $1.20    �");
	gotoxy(2,9);  cprintf("� 200 - 399      �    @ $1.50    �");
	gotoxy(2,10); cprintf("� 400 - 599      �    @ $1.80    �");
	gotoxy(2,11); cprintf("� 600 and above  �    @ $2.00    �");
	gotoxy(2,12); cprintf("읕컴컴컴컴컴컴컴컨컴컴컴컴컴컴컴켸");

	textcolor(YELLOW);
	gotoxy(40,4); cprintf("Please input the following information");
	gotoxy(43,6); cprintf("Customer ID No. : "); scanf("%d",&cusid);
	gotoxy(43,7); cprintf("Customer Name   : "); scanf("%s",&connm);
	gotoxy(43,8); cprintf("Unit Consumed   : "); scanf("%d",&conu);

	textcolor(RED + BLINK);
	gotoxy(40,10); cprintf("Bill exceeds $400, surcharge  = 15%");
	gotoxy(40,11); cprintf("Minimum amount bill surcharge = $100");

	if(conu <= 199)                     { chg = 1.20; }
	else if(conu >= 200 && conu <= 399) { chg = 1.50; }
	else if(conu >= 400 && conu <= 599) { chg = 1.80; }
	else if(conu >= 600)                { chg = 2.00; }
	else				    { printf("Invalid Input"); }

	gramt = conu * chg;
		if(gramt > 300)  { surchg = gramt * 15 / 100.00; }

	netamt = gramt + surchg;
		if(netamt < 100) { netamt = 100; }

	textcolor(MAGENTA);
	gotoxy(2,13);  cprintf("旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커");
	gotoxy(2,14);  cprintf("�                                                                            �");
	gotoxy(2,15);  cprintf("쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑");
	gotoxy(2,16);  cprintf("�                                                                            �");
	gotoxy(2,17);  cprintf("�                                                                            �");
	gotoxy(2,18);  cprintf("�                                                                            �");
	gotoxy(2,19);  cprintf("�                                                                            �");
	gotoxy(2,20);  cprintf("�                                                                            �");
	gotoxy(2,21);  cprintf("�                                                                            �");
	gotoxy(2,22);  cprintf("�                                                                            �");
	gotoxy(2,23);  cprintf("�                                                                            �");
	gotoxy(2,24);  cprintf("읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸");

	textcolor(CYAN);
	gotoxy(33,14); cprintf("ELECTRIC BILL");
	gotoxy(15,16); cprintf("Customer ID No.                      : %d", cusid);
	gotoxy(15,17); cprintf("Customer Name                        : %s", connm);
	gotoxy(15,18); cprintf("Unit Consumed                        : %d", conu);
	gotoxy(15,20); cprintf("Amount Charges @ $%4.2f per unit      : $ %10.2f", chg, gramt);
	gotoxy(15,21); cprintf("Surcharge Amount                     : $ %10.2f", surchg);
	gotoxy(15,22); cprintf("Net Amount Paid by the Customer      : $ %10.2f", netamt);
	gotoxy(80,25);

	getch();
	return 0;}