# Solar System

It's taken from [Computer-Graphics, SagarGaniga GitHub](https://github.com/SagarGaniga/computer-graphics)
## Steps

1. Set initial positions of planets
2. Loop
	2. Change the displacement as a = (pi/180) * initial position
	3. Draw the circle with new position as
		circle(320+x*sin(b),240-y*cos(b),12);
        ellipse(320,240,0,360,x,y);
		x and y with incremnet of 30 and differece of 30

## Output

<!-- output of `SolarSystem.cpp` -->
![solar_system](https://user-images.githubusercontent.com/46064269/235479849-b363ed70-49ea-4603-90a8-74e024049a53.gif)
