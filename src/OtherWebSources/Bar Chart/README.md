# Bar Chart & Bar Chart 3D

## Index

1. [Bar Chart](barChart)
2. [Bar Chart 3D](barChart3d)

## Bar Chart {#barChart}

Here is a C graphics program to draw [bar chart](https://www.techcrashcourse.com/2015/08/c-program-draw-bar-graph-using-graphics.html) on screen using graphics.h header file. In this program, we will draw a bar graph on screen. Here, we will use line, setfillstyle and bar functions of graphics.h header file to draw horizontal and vertical axis and bars on screen.

1. `void line(int x1, int y1, int x2, int y2);` draws a line from (x1, y1) to (x2, y2).
2. `void setfillstyle(int pattern, int color);` sets the current fill pattern and fill color.
3. `void bar(int xTopLeft, int yTopLeft, int xBottomRight, int yBottomRight);` draws a rectangle and fill it with current fill pattern and color.

| **Function Argument** | **Description**                       |
|:---------------------:|:--------------------------------------|
| xTopLeft              | X coordinate of top left corner.      |
| yTopLeft              | Y coordinate of top left corner.      |
| xBottomRight          | X coordinate of bottom right corner.  |
| yBottomRight          | Y coordinate of bottom right corner.  |

## Bar Chart 3D {#barChart3d}

Here is a C program to draw [3D bar chart](https://www.techcrashcourse.com/2015/08/c-program-draw-3d-bar-graph-using-graphics.html) on screen using graphics.h header file. In this program, we will draw a 3D bar graph on screen. Here, we will use line, setfillstyle and bar3d functions of graphics.h header file to draw horizontal and vertical axis and bars on screen.

1. `void line(int x1, int y1, int x2, int y2);` draws a line from (x1, y1) to (x2, y2).
2. `void setfillstyle(int pattern, int color);` sets the current fill pattern and fill color.
3. `void bar3d(int xTopLeft, int yTopLeft, int xBottomRight, int yBottomRight, int depth, int topFlag);` draws a 3D cuboid and fill front facing surface with current fill pattern and color.

| **Function Argument** | **Description**                                                                                                    |
|:---------------------:|:--------------------------------------------------------------------------------------------------------------------|
| xTopLeft              | X coordinate of top left corner.                                                                                    |
| yTopLeft              | Y coordinate of top left corner.                                                                                    |
| xBottomRight          | X coordinate of bottom right corner.                                                                                |
| yBottomRight          | Y coordinate of bottom right corner.                                                                                |
| depth                 | It specifies the depth of bar in pixels.                                                                            |
| topFlag               | It specifies whether a 3D top to put on the bar or not(any non-zero value specifies a 3d top other wise no 3d top). |

## Output

1. Bar Chart
\

2. 3D Bar Chart
\

