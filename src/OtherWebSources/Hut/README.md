# Hut

[C Program to Draw a Hut on Screen Using C Graphics](https://www.techcrashcourse.com/2015/08/c-program-draw-hut-color-screen-graphics.html)

Here is a C graphics program to draw a hut and color it using graphics.h header file. In this program, we will draw a hut on screen using line and rectangle function and then fill it with different patterns and colors. We will use below mentioned graphics functions in this program.

| **Function Argument** | **Description**                                                                                                                                                                                          |
|:---------------------:|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| initgraph             | It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.                                                                                     |
| setcolor              | It changes the current drawing colour. Default colour is white. Each color is assigned a number, like BLACK is 0 and RED is 4. Here we are using colour constants defined inside graphics.h header file.  |
| setfillstyle          | It sets the current fill pattern and fill color.                                                                                                                                                          |
| rectangle             | It draws a rectangle on screen. It takes the coordinates of top left and bottom right corners.                                                                                                            |
| line                  | It draws a straight line between two points on screen.                                                                                                                                                    |
| floodfill             | It is used to fill a closed area with current fill pattern and fill color. It takes any point inside closed area and color of the boundary as input.                                                      |
| closegraph            | It unloads the graphics drivers and sets the screen back to text mode.                                                                                                                                    |


## Output


