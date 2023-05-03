#include <graphics.h>
#include <dos.h>

int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");

  settextstyle(BOLD_FONT, HORIZ_DIR, 2);
  outtextxy(275, 0, "3D BAR GRAPH");

  setlinestyle(SOLID_LINE, 0, 2);
  /* Print X and Y Axis */
  line(90, 410, 90, 50);
  line(90, 410, 590, 410);
  line(85, 60, 90, 50);
  line(95, 60, 90, 50);
  line(585, 405, 590, 410);
  line(585, 415, 590, 410);

  outtextxy(65, 60, "Y");
  outtextxy(570, 420, "X");
  outtextxy(70, 415, "O");

  /* Print 3D bars */
  setfillstyle(XHATCH_FILL, GREEN);
  bar3d(150, 80, 200, 410, 15, 1);
  bar3d(225, 100, 275, 410, 15, 1);
  bar3d(300, 120, 350, 410, 15, 1);
  bar3d(375, 170, 425, 410, 15, 1);
  bar3d(450, 135, 500, 410, 15, 1);

  getch();
  closegraph();
  return 0;
}
