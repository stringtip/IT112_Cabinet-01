#include <stdio.h>

main()
{
	int a;
	clrscr();

	while(1){
		a = getch();
		if ((int)a == 27) break;
		printf("%d\n",(int)a);
}}
