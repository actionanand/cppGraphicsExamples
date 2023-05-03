#include <stdio.h>
#include <graphics.h>
#include <string.h>
#include <dos.h>

int main()
{
  int gd = DETECT, gm;
  int i, midx, midy, count;
  char string[100];
  printf("Enter a Number\n");
  scanf("%d", &count);
  initgraph(&gd, &gm, "X:\\TC\\BGI");

  /* get mid positions in x and y-axis */
  midx = getmaxx() / 2;
  midy = getmaxy() / 2;

  for (i = 0; i <= count; i++)
  {
    /* draws the gray board */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(midx - 50, midy - 50, midx + 50, midy + 50);
    floodfill(midx, midy, WHITE);

    /* place the counter inside rectangle */
    setcolor(BLUE);
    sprintf(string, "%s", "Counter");
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy - 100, "Counter");

    /* print the counter value */
    sprintf(string, "%d", i);
    outtextxy(midx, midy, string);

    /* delay for a second(1000 milli second) */
    delay(1000);

    /* clears screen */
    cleardevice();
  }

  closegraph();
  return 0;
}
