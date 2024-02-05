#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char des_str[5] = "F";
	char src_str[5] = "L";
	clrscr();

	strcat(des_str, src_str);

	printf("\t\tComparing des_str and src_str: %d\n",
			strncmp(des_str, src_str, 1));

	getch();
	return 0;
}