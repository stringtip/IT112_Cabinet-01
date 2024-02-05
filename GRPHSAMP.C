#include <graphics.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define RECTPIXELWIDTH 5
#define RECTPIXELCOLS 5
#define RECTPIXELROWS 7

void MyDrawLine(int x1, int y1, int x2, int y2, int clr)
{
	setcolor(clr);
	line(x1, y1, x2, y2);
}

void MyFillRectangle(int x1, int y1, int x2, int y2, int clr)
{
	int tempx, tempy;

	for(tempy = y1; tempy <= y2; tempy++)
	{
		for(tempx = x1; tempx <= x2; tempx++)
		{
			putpixel(tempx, tempy, clr);
		}
	}
}

void MyDrawRectangle(int x1, int y1, int x2, int y2, int clr)
{
	/* Draw 2 Horizontal Lines */
	/*MyDrawLine(x1, y1, x2, y1, clr);
	MyDrawLine(x1, y2, x2, y2, clr);

	/* Draw 2 Vertical Lines */
	MyDrawLine(x1, y1, x1, y2, clr);
	MyDrawLine(x2, y1, x2, y2, clr);

	/* Fill Rectangle */
	MyFillRectangle(x1, y1, x2, y2, clr);
}


main()
{
	int GraphDriver = DETECT;
	int GraphMode;
	int x, y, *maxclr;


	initgraph(&GraphDriver, &GraphMode, "");

 
	x = 10; y = 10;

	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayR);

	getch();
	closegraph();
}
