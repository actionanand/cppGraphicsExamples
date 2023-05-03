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


## Eclipse

Here is a C program to draw an eclipse on screen using graphics.h header file. In this program, we will draw an eclipse on screen having centre at mid of the screen. We will use ellipse functions of graphics.h header file to draw eclipse on screen. Below is the detailed descriptions of ellipse function.

```cpp
  void ellipse(int xCenter, int yCenter, int startAngle, int endAngle, int xRadius, int yRadius);
```

| **Function Argument** | **Description**                                                                             |
|:---------------------:|:--------------------------------------------------------------------------------------------|
| xCenter               | X coordinate of center of eclipse.                                                          |
| yCenter               | Y coordinate of center of eclipse.                                                          |
| startAngle            | Start angle of the eclipse arc.                                                             |
| endAngle              | End angle of the eclipse arc. It will draw eclipse starting form startAngle till endAngle.  |
| xRadius               | Horizontal radius of the eclipse.                                                           |
| yRadius               | Vertical radius of the eclipse.                                                             |

To draw a complete eclipse, we should pass start and end angle as 0 and 360 respectively.

In this program we first initialize graphics mode, by passing graphics driver(DETECT), default graphics mode and specifies the directory path where initgraph looks for graphics drivers (*.BGI). First of all we will calculate the center co-ordinates of eclipse which is the center of screen bu calling getmaxx and getmaxy function. Then we draw full eclipse by calling ellipse function.

## Concentric Circles

Here is a C graphics program to draw concentric circle on screen using graphics.h header file. In this program, we will draw four circle on screen having centre at mid of the screen and radius 30, 50, 70 and 90 pixels. We will use outtextxy and circle functions of graphics.h header file. Below is the detailed descriptions of graphics functions used in this program.

| **Function** | **Description**                                                                                                                                                                                          |
|:------------:|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| initgraph    | It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.                                                                                     |
| getmaxx      | It returns the maximum X coordinate in current graphics mode and driver.                                                                                                                                  |
| getmaxy      | It returns the maximum Y coordinate in current graphics mode and driver.                                                                                                                                  |
| outtextxy    | It displays a string at a particular point (x,y) on screen.                                                                                                                                               |
| circle       | It draws a circle with radius r and centre at (x, y).                                                                                                                                                     |
| setcolor     | It changes the current drawing colour. Default colour is white. Each color is assigned a number, like BLACK is 0 and RED is 4. Here we are using colour constants defined inside graphics.h header file.  |
| closegraph   | It unloads the graphics drivers and sets the screen back to text mode.                                                                                                                                    |


## Output

### Circle

![image](https://user-images.githubusercontent.com/46064269/235942456-a9c7a040-e112-42e7-8658-d6a541d1247b.png)

## Rectangle & Solid Bar

![image](https://user-images.githubusercontent.com/46064269/235945640-5583538a-3cb8-4a01-9220-a6ce8a6253ff.png)

## Eclipse

![image](https://user-images.githubusercontent.com/46064269/235947542-e13292f8-99b8-4d9c-b2d1-39056bcc4149.png)

## Concentric Circles

![image](https://user-images.githubusercontent.com/46064269/235949434-eaa67784-db66-4647-964a-04237902b28c.png)
