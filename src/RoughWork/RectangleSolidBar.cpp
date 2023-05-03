#include <stdio.h>
#include <graphics.h>

int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");

  /* Draw rectangle on screen */
  rectangle(150, 50, 400, 150);

  /* Draw Bar on screen */
  bar(150, 200, 400, 350);

  getch();
  closegraph();
  return 0;
}
