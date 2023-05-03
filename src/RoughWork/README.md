# Rough Workbook for practice

## C Program to Draw a Circle Using C Graphics

In this program we first initialize graphics mode, by passing graphics driver(DETECT), default graphics mode and specifies the directory path where initgraph looks for graphics drivers (*.BGI). It is the first step you need to do during graphics programming. Setting graphics driver as DETECT, means instructing the compiler to auto detect graphics driver. Here we are using getmaxx and getmaxy function to find the center coordinate of the screen.

| **Function** | **Description**                                                                                                       |
|:------------:|:-----------------------------------------------------------------------------------------------------------------------|
| initgraph    | It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.  |
| getmaxx      | It returns the maximum X coordinate in current graphics mode and driver.                                               |
| getmaxy      | It returns the maximum Y coordinate in current graphics mode and driver.                                               |
| outtextxy    | It displays a string at a particular point (x,y) on screen.                                                            |
| circle       | It draws a circle with radius r and centre at (x, y).                                                                  |
| closegraph   | It unloads the graphics drivers and sets the screen back to text mode.                                                 |

## Rectangle and Bar Using C Graphics

Here is a C program to draw a rectangle and a bar on screen using graphics.h header file. In this program, we will draw a rectangle and a bar on screen. We will use rectangle and bar functions of graphics.h header file to draw rectangle and bar on screen. Below is the detailed descriptions if these two functions.

  - `void rectangle(int xTopLeft, int yTopLeft, int xBottomRight, int yBottomRight);` draws a rectangle on screen. It takes the coordinates of top left and bottom right corners.
  - `void bar(int xTopLeft, int yTopLeft, int xBottomRight, int yBottomRight);` draws a rectangle and fill it with current fill pattern and color.

  | **Function Argument** | **Description**                       |
  |:---------------------:|:--------------------------------------|
  | xTopLeft              | X coordinate of top left corner.      |
  | yTopLeft              | Y coordinate of top left corner.      |
  | xBottomRight          | X coordinate of bottom right corner.  |
  | yBottomRight          | Y coordinate of bottom right corner.  |


## Output

### Circle

![image](https://user-images.githubusercontent.com/46064269/235942456-a9c7a040-e112-42e7-8658-d6a541d1247b.png)
