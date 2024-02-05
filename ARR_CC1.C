#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char des_str[20] = "Firstname";
	char src_str[20] = "Lastname";
	char temp_str[50];
	clrscr();

	printf("\n\n\t\tString 1: %s\n", des_str);
	printf("\t\tLength of Destination String: %d\n", strlen(des_str));
	strcpy(temp_str, src_str);
	printf("\n\t\tTemporary String now: %s\n", temp_str);

	getch();
	return 0;
}