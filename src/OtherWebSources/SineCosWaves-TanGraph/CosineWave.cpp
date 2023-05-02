#include <math.h>
#include <graphics.h>
#include <dos.h>

int main()
{
  int gd = DETECT, gm;
  int angle = 0;
  double x, y;

  initgraph(&gd, &gm, "C:\\TC\\BGI");

  line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
  /* generate a sine wave */
  for (x = 0; x < getmaxx(); x += 3)
  {

    /* calculate y value given x */
    y = 50 * sin(angle * 3.141 / 180);
    y = getmaxy() / 2 - y;

    /* color a pixel at the given position */
    putpixel(x, y, 15);
    delay(100);

    /* increment angle */
    angle += 5;
  }

  closegraph();

  return 0;
}
