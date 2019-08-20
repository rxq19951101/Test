#include <stdio.h>
#define CUBE(x) (x*x)
//我在测试branch和rebase的用法
//测试第二次
void main()
{
	int x,y;
	x=5;
	y=CUBE(++x);
	printf("%d",y);


}
