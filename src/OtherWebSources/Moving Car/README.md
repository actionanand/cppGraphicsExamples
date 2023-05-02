# Moving Car

[C Program for Moving Car Animation Using C Graphics](https://www.techcrashcourse.com/2015/08/c-graphics-program-moving-car-animation.html)

Here is a C graphics program for moving car animation using graphics.h header file. In this program, we will first draw a car and color it. In every iteration of for loop we keep on increasing the x coordinates of every point of car to make it look like this car is moving from left to right. We will use below mentioned graphics functions in this program.

| **Function** | **Description**                                                                                                                                                                                          |
|:------------:|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| initgraph    | It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.                                                                                     |
| getmaxx      | It returns the maximum X coordinate in current graphics mode and driver.                                                                                                                                  |
| getmaxy      | It returns the maximum X coordinate in current graphics mode and driver.                                                                                                                                  |
| setcolor     | It changes the current drawing colour. Default colour is white. Each color is assigned a number, like BLACK is 0 and RED is 4. Here we are using colour constants defined inside graphics.h header file.  |
| setfillstyle | It sets the current fill pattern and fill color.                                                                                                                                                          |
| circle       | It draws a circle with radius r and centre at (x, y).                                                                                                                                                     |
| line         | It draws a straight line between two points on screen.                                                                                                                                                    |
| arc          | It draws a circular arc from start angle till end angle.                                                                                                                                                  |
| floodfill    | It is used to fill a closed area with current fill pattern and fill color. It takes any point inside closed area and color of the boundary as input.                                                      |
| cleardevice  | It clears the screen, and sets current position to (0, 0).                                                                                                                                                |
| delay        | It is used to suspend execution of a program for a M milliseconds.                                                                                                                                        |
| closegraph   | It unloads the graphics drivers and sets the screen back to text mode.                                                                                                                                    |

### C program for moving car graphics animation

  * In this program, we first draw a red color car on left side of the screen (x,y) and then erases it using cleardevice function. We again draw this car at(x + 5, y). This will look like a moving car from left to right direction. We will repeat above steps until car reaches the right side of screen.


## Output

![color_car_moving](https://user-images.githubusercontent.com/46064269/235514616-c9249eb4-3a8f-4e3c-87a1-db760968c6bb.gif)
