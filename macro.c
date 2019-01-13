#include <stdio.h>
#define CUBE(x) (x*x)

void main()
{
	int x,y;
	x=5;
	y=CUBE(++x);
	printf("%d",y);


}
