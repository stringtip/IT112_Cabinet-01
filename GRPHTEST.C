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

void MyDrawRectangleArray(int x, int y, int clr1, int clr2, int *CharacterArray)
{
	int tempx, tempy, Charx;

	Charx = 0;
	for(tempy = y; tempy <= y + ((RECTPIXELWIDTH * RECTPIXELROWS) * 2) - 1; tempy += (RECTPIXELWIDTH * 2))
	{
		for(tempx = x; tempx <= x + ((RECTPIXELWIDTH * RECTPIXELCOLS) * 2) - 1; tempx += (RECTPIXELWIDTH * 2))
		{
			if(*(CharacterArray + Charx) == 1)
			{
				MyDrawRectangle(tempx, tempy, tempx + RECTPIXELWIDTH, tempy + RECTPIXELWIDTH, clr2);
			}
			else
			{
				MyDrawRectangle(tempx, tempy, tempx + RECTPIXELWIDTH, tempy + RECTPIXELWIDTH, clr1);
			}
			Charx++;
		}
		Charx += 1;
	}
}

main()
{
	int GraphDriver = DETECT;
	int GraphMode;
	int x, y, *maxclr;

	int CharacterArrayA[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{0, 0, 1, 0, 0},\
								 {0, 1, 0, 1, 0},\
								 {1, 0, 0, 0, 1},\
								 {1, 1, 1, 1, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1}};

	int CharacterArrayR[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{1, 1, 1, 1, 0},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 1, 1, 1, 0},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1}};

	int CharacterArrayM[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{1, 0, 0, 0, 1},\
								 {1, 1, 0, 1, 1},\
								 {1, 0, 1, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1}};

	int CharacterArrayO[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{0, 1, 1, 1, 0},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {1, 0, 0, 0, 1},\
								 {0, 1, 1, 1, 0}};

	int CharacterArrayE[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{1, 1, 1, 1, 1},\
								 {1, 0, 0, 0, 0},\
								 {1, 1, 1, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 1, 1, 1, 1}};

	int CharacterArrayL[RECTPIXELROWS+1][RECTPIXELCOLS+1] = {{1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 0, 0, 0, 0},\
								 {1, 1, 1, 1, 1}};

	initgraph(&GraphDriver, &GraphMode, "");

        maxclr = (int *)getmaxcolor();
	x = 10; y = 10;

	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayR);
	x += 10 * RECTPIXELWIDTH;
	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayO);
	x += 10 * RECTPIXELWIDTH;
	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayM);
	x += 10 * RECTPIXELWIDTH;
	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayM);
	x += 10 * RECTPIXELWIDTH;
	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayE);
	x += 10 * RECTPIXELWIDTH;
	MyDrawRectangleArray(x, y, WHITE, BLUE, CharacterArrayL);

	/*MyDrawRectangleArray(20 + ((RECTPIXELWIDTH * (RECTPIXELCOLS + RECTPIXELCOLS - 1))), 10, WHITE, BLUE, CharacterArrayO);
	MyDrawRectangleArray(30 + ((RECTPIXELWIDTH * (RECTPIXELCOLS + RECTPIXELCOLS - 1)) * 2), 10, WHITE, BLUE, CharacterArrayM);
	MyDrawRectangleArray(40 + ((RECTPIXELWIDTH * (RECTPIXELCOLS + RECTPIXELCOLS - 1)) * 3), 10, WHITE, BLUE, CharacterArrayM);
	MyDrawRectangleArray(50 + ((RECTPIXELWIDTH * (RECTPIXELCOLS + RECTPIXELCOLS - 1)) * 4), 10, WHITE, BLUE, CharacterArrayE);
	MyDrawRectangleArray(60 + ((RECTPIXELWIDTH * (RECTPIXELCOLS + RECTPIXELCOLS - 1)) * 5), 10, WHITE, BLUE, CharacterArrayL);
	*/
	getch();
	closegraph();
}
