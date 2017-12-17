#include<stdio.h>

int main()
{
	int fac(int n);
	int y, n;

	printf("Please input a number:\n");
	scanf("%d", &n);
	if(n < 0)
		printf("error data!");
	else
	{
		y = fac(n);
		printf("%d!=%d", n,y);
	}

	return 0;
}

int fac(int n)
{
	int f;
	
	if(n==0 || n==1)
		f = 1;
	else
		f = fac(n-1)*n;

	return f;
}
