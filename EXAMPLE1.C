#include<stdio.h>
main()
{
	int num[3], x;
	clrscr();
	for(x = 0; x < 3; x++)
	{
		printf("Enter any integer value: ");
		scanf("%d",&num[x]);
	}
	clrscr();
	printf("Your array contains: \n");
	for(x = 0; x < 3; x++)
	{
		printf("num[%d] = %d\n", x, num[x]);
	}
	getch();
	return(0);
}