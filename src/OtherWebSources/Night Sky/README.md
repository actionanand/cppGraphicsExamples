# Twinkling Night Sky Animation

Here is the C program to draw stars in night sky using graphics.h header file. In this program, we will randomly select 500 pixels on screen and color them in while. We will use putpixel functions of graphics.h header file to color a pixel at (x, y).

In this program, we first initialize graphics mode, by passing graphics driver(DETECT), default graphics mode and specifies the directory path where initgraph looks for graphics drivers (*.BGI). Then we will randomly select any (x, y) coordinate using rand, getmaxx and getmaxy function and color it using putpixel function. After 500 milliseconds we will clear screen and again paint the screen with stars until presses any key.

## Output

![twinkling_night_star](https://user-images.githubusercontent.com/46064269/235843126-5f61890c-9f41-473c-926a-8c1048250b45.gif)
