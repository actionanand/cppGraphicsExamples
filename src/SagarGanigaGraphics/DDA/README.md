# DDA Algotrithm

It's taken from [Computer-Graphics, SagarGaniga GitHub](https://github.com/SagarGaniga/computer-graphics)

1.  calculate dx , dy
2.  dx = X1 - X0;
    dy = Y1 - Y0;

3.  Depending upon absolute value of dx & dy choose number of steps to put pixel as
    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy)

4.  calculate increment in x & y for each steps

5.  Xinc = dx / (float) steps;
    Yinc = dy / (float) steps;

6.  Put pixel for each step
    X = X0;
    Y = Y0;
	
    for (int i = 0; i <= steps; i++)
	{
        
		putpixel (X,Y,WHITE);
        
		X += Xinc;
        
		Y += Yinc;
    
	}

## Output

![2d_transformation](https://user-images.githubusercontent.com/46064269/235465746-1db87d5a-1ed3-474e-9ef3-681ecdbdb478.PNG)

