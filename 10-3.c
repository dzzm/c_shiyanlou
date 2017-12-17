#include<stdio.h>

int main()
{
	void exchange(int *p1, int *p2, int *p3);
	int a, b, c, *p1, *p2, *p3;
	
	printf("Please input 3 numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	p1 = &a; p2 = &b; p3 = &c;

	exchange(p1, p2, p3);
	printf("The order is %d %d %d.\n", a, b, c);

	return 0;
}

void exchange(int *p1, int *p2, int *p3)
{
	void swap(int *q1, int *q2);
	swap(p1, p2);
	swap(p1, p3);
	swap(p2, p3);
}

void swap(int *q1, int *q2)
{
	int tmp;
	if(*q1 < *q2)
	{
		tmp = *q1;
		*q1 = *q2;
		*q2 = tmp;
	}
}
