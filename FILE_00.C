#include <stdio.h>

int main()
{
	FILE * fp;
	clrscr();

	fp = fopen("/tm p/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);

	getch();
	return 0;
}