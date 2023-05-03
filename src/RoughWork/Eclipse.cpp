#include <stdio.h>
#include <graphics.h>

int main()
{
  int gd = DETECT, gm;
  int x, y;
  initgraph(&gd, &gm, "X:\\TC\\BGI");
  /* Initialize center of ellipse with center of screen */
  x = getmaxx() / 2;
  y = getmaxy() / 2;

  outtextxy(x - 100, 50, "ELLIPSE Using Graphics in C");
  /* Draw ellipse on screen */
  ellipse(x, y, 0, 360, 120, 60);

  getch();
  closegraph();
  return 0;
}
