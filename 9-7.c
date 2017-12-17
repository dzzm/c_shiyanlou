#include<stdio.h>

int main()
{
	int fun(int a, int b);
	int a, b, c;

	printf("Please input 2 numbers:\n");
	scanf("%d%d", &a,&b);

	c = fun(a, b);
	printf("The result is %d\n", c);

	return 0;
}

int fun(int a, int b)
{
	int th, h, ten, one;

	th = a%10;
	ten = a/10;
	h = b/10;
	one = b%10;

	return (th*1000 + h*100 + ten*10 + one);
}
