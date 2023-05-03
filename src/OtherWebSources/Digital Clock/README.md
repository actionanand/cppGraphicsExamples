# Digital Clock

[C Program to Make a Digital Clock Using C Graphics](https://www.techcrashcourse.com/2015/08/c-program-make-digital-clock-using-graphics.html)

Here is a C graphics program to make a digital clock using graphics.h header file. In this program, we will make a digital clock that print current Day, Month, Year and Date on screen inside a rectangular box. We will use below mentioned graphics functions in this program. Here, we are using time function of time.h header file to get the current epoch time(epoch time is number of seconds since 1 January 1970, UTC).

We convert epoch time to string representing the localtime in "www mmm dd hh:mm:ss yyyy" format, where www is the weekday, mmm is the month in letters, dd is the day of the month, hh:mm:ss is the time, and yyyy is the year. After printing current date and time on screen, it waits for 1000 milliseconds(1 second) before printing it again on screen.

## Output

```bash
  Enter a Number
  5
```

![digital_counter](https://user-images.githubusercontent.com/46064269/235934686-1170ce99-e4a9-4f76-9eff-f0f1b458e136.gif)
