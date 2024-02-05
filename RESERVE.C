#include <stdio.h>

int reserve[11] = {0,0,0,0,0,0,0,0,0,0,0};
char name[11][30], address[11][60];

int display_seats()
{
	int x, num, seat;

	for(x = 1, num = 1; x <= 5; x++)
	{
		printf("[%d] [%d]\n", num, num+1);
		num += 2;
	}

	printf("Choose a seat #: ");
	scanf("%d", &seat);
	if(seat >= 1 && seat <= 10)
	{	return(seat);	}
	else
	{       return(-1);	}
}

int check_seat(int num)
{
	if(reserve[num] == 0)
	{	return(0);	}
	else
	{	return(1);	}
}

void reserve_seat(int num)
{
	reserve[num] = 1;

	clrscr();
	flushall();
	printf("Fullname: ");	gets(name[num]);
	printf("\nAddress: ");	gets(address[num]);
	return(0);
}

void view_reserved()
{
	int x;
	clrscr();
	for(x = 1; x <= 10; x++)
	{
		if(reserve[x] == 1)
		{
			printf("Seat: %d %s", x, name[x]);
			printf("\n");
		}
	}
}



main()
{
	int choice, empty;
	while(1)
	{
		clrscr();
		choice = display_seats();
		if(choice == -1)
		{	return(0);	}
		empty = check_seat(choice);
		if(empty != 0)
		{
			printf("The seat number %d is reserved", choice);
			printf("\nReserved to:");
			printf("\nName: %s", name[choice]);
			printf("\nAddress: %s", address[choice]);
			getch();
		}
		else
		{
			reserve_seat(choice);
		}
	}

	getch();
}