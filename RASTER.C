#include <graphics.h>
#include <stdlib.h>
void pix(int x, int y, int color);

main()
{
	int GraphDriver = DETECT;
	int GraphMode;
	int x,y;
	initgraph(&GraphDriver, &GraphMode, "");

	pix(10,10,14);
	getch();
	closegraph();
}

void pix(int x, int y, int color)
{
 int a,b;
 a=x+5;
 b=y+5;
for( x = 10 ; x <= a ; x++)
	{   for ( y = 10 ; y <= b; y++)
		putpixel(x,y,color);
	}
}