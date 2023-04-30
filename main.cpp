#include <graphics.h>

int main(int argc, char const *argv[]){
  int gd=DETECT, gm;
  initgraph(&gd, &gm, (char*)"");
  circle(320, 240, 200);
  getch();
  closegraph();
  return 0;
}
