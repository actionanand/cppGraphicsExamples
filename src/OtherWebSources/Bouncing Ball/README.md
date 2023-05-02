# Bouncing Ball

[C Program for Bouncing Ball Animation Using C Graphics](https://www.techcrashcourse.com/2015/08/c-program-bouncing-ball-animation-graphics.html)

Here is a C graphics program for bouncing ball animation using graphics.h header file. In this program, we will draw a red color ball move it vertically up and down like a bouncing ball. We will use below mentioned functions in this program.

| **Function** | **Description**                                                                                                                                                                                          |
|:------------:|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| initgraph    | It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.                                                                                     |
| getmaxx      | It returns the maximum X coordinate in current graphics mode and driver.                                                                                                                                  |
| setcolor     | It changes the current drawing colour. Default colour is white. Each color is assigned a number, like BLACK is 0 and RED is 4. Here we are using colour constants defined inside graphics.h header file.  |
| setfillstyle | It sets the current fill pattern and fill color.                                                                                                                                                          |
| circle       | It draws a circle with radius r and centre at (x, y).                                                                                                                                                     |
| floodfill    | It is used to fill a closed area with current fill pattern and fill color. It takes any point inside closed area and color of the boundary as input.                                                      |
| cleardevice  | It clears the screen, and sets current position to (0, 0).                                                                                                                                                |
| kbhit        | It is used to determine whether a key is pressed or not. It returns a non-zero value if a key is pressed otherwise zero.                                                                                  |
| delay        | It is used to suspend execution of a program for a M milliseconds.                                                                                                                                        |
| closegraph   | It unloads the graphics drivers and sets the screen back to text mode.                                                                                                                                    |

### C program for bouncing ball graphics animation

* In this program, we first draw a red color ball on screen having center at (x, y) and then erases it using cleardevice function. We again draw this ball at center (x, y + 5), or (x, y - 5) depending upon whether ball is moving down or up. This will look like a bouncing ball. We will repeat above steps until user press any key on keyboard.

## Output

![bouncing_ball](https://user-images.githubusercontent.com/46064269/235741727-357dcd1a-ba36-4015-8247-147e1b77ad4a.gif)

