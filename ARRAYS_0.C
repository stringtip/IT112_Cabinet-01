#include<stdio.h>
#include<conio.h>

int main()
{
	int communion[5] = {10, 20, 30, 40, 50};
	int sum = 0, num;
	clrscr();
	printf("\n\n");
	for(num=0;num<=4;num++){
		printf("Element %d is %d.\n",num, communion[num]);
		sum = sum + communion[num];}

	printf("\nThe sum is %d.", sum);

	getch();
	return 0;
}