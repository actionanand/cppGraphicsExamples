# Fractal Tree

It's taken from [Computer-Graphics, SagarGaniga GitHub](https://github.com/SagarGaniga/computer-graphics)
## Driver

Call drawTree with

	1. x position
	
	2. y position
	
	3. length of bark
	
	4. Angle of deviation
	
	5. angle of tree
	
	6. level of recursion
	
## Recusrsion

1.	change the x1 and x2 as
		x1 = x - length * sin(angle of tree)
		y1 = y -  length * cos(angle pf tree)
2. 	Draw the line
3. 	Recursive function calls with
	1. new x value. i.e. x1
	2. new y value. i.e. y1
	3. reduced length of bark
	4. angle of barks
	5. new angle of tree
	6. reduced recursion level
4. Call RHS and LHS recursion

## Output

![image](https://user-images.githubusercontent.com/46064269/235471601-88b5db74-142f-4095-a02a-941195231d83.png)
![fractalTree](https://user-images.githubusercontent.com/46064269/235471641-be2adbf1-8231-41eb-8c7f-5454943e00d4.gif)


