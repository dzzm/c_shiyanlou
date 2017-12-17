#include<stdio.h>

int main()
{
	void swap(int *p1, int *p2);
	int a, b, *p1, *p2;

	printf("Please input 2 numbers:\n");
	scanf("%d%d", &a, &b);
	p1 = &a;
	p2 = &b;

	if(b>a)
		swap(p1, p2);

	printf("max=%d\nmin=%d\n", *p1, *p2);

	return 0;
}

void swap(int *p1, int *p2)
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
