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


## Output

### Circle


