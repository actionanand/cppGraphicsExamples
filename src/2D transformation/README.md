# Transformations

It's taken from [Computer-Graphics, SagarGaniga GitHub](https://github.com/SagarGaniga/computer-graphics)

## Matrix Multiplication

```cpp
  for(i=0;i<3;i++) {
    for(j=0;j<18;j++) {
      sum=0;
      for(k=0;k<3;k++) {
        sum=sum+t[i][k]*p[k][j];
      }
      c[i][j]=sum;
    }
  }
```

## translate

```bash
  float t[3][3] = {{1,0,100},{0,1,100},{0,0,1}};
```

## scale

```cpp
  float d[3][3] = {{tx,0,0},{0,ty,0},{0,0,1}};
```

## rotate

```cpp
  float t[3][3] = {{cos(d2r(30)),-sin(d2r(30)),0},{sin(d2r(30)),cos(d2r(30)),0},{0,0,1}};
```

### degree to radians

```cpp
  double d2r(double d) {
    return (d / 180.0) \* ((double) M_PI);
  }
```

## reflect

```cpp
  float t[3][3] = {{1,0,0},{0,-1,0},{0,0,1}};
```

## Output

![step1](https://github.com/actionanand/cppGraphicsExamples/blob/master/assets/img/2d_transformation.png)
