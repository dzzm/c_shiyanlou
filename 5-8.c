#include<stdio.h>

int main()
{
	char a;

	printf("Please input an uppercase letter:");
	a=getchar();
	putchar(a+32);
	putchar('\n');

	return 0;
}
