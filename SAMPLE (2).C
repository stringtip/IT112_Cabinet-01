#include <graphics.h>

void MyDrawLine(int x1, int y1, int x2, int y2, int clr)
{
	setcolor(clr);
	line(x1, y1, x2, y2);
}

main()
{
	int GraphDriver = DETECT;
	int GraphMode;

	initgraph(&GraphDriver, &GraphMode, "");

	MyDrawLine(10, 10, 100, 50, WHITE);

	getch();
	closegraph();
}
