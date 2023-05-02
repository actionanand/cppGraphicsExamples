#include <stdio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
  int gd = DETECT, gm, x, y;
  initgraph(&gd, &gm, "C:\\TC\\BGI");

  settextstyle(BOLD_FONT, HORIZ_DIR, 2);
  outtextxy(220, 10, "PIE CHART");
  /* Setting cordinate of center of circle */
  x = getmaxx() / 2;
  y = getmaxy() / 2;

  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
  setfillstyle(SOLID_FILL, RED);
  pieslice(x, y, 0, 60, 120);
  outtextxy(x + 140, y - 70, "FOOD");

  setfillstyle(SOLID_FILL, YELLOW);
  pieslice(x, y, 60, 160, 120);
  outtextxy(x - 30, y - 170, "RENT");

  setfillstyle(SOLID_FILL, GREEN);
  pieslice(x, y, 160, 220, 120);
  outtextxy(x - 250, y, "ELECTRICITY");

  setfillstyle(SOLID_FILL, LIGHTCYAN);
  pieslice(x, y, 220, 360, 120);
  outtextxy(x, y + 150, "SAVINGS");

  getch();
  closegraph();
  return 0;
}
