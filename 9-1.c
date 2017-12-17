#include<stdio.h>

int main()
{
	int a=10, b=20, c;
	int max(int x, int y);

	c = max(a, b);
	printf("The max number is %d.\n", c);

	return 0;
}

int max(int x, int y)
{
	int z;

	z = x>y?x:y;	

	return z;
}
