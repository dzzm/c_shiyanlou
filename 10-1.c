#include<stdio.h>

int main()
{
	int *p1, *p2, *p, a, b;

	printf("Please input 2 numbers:\n");
	scanf("%d%d", &a, &b);

	p1 = &a;
	p2 = &b;

	if(a<b)
	{
		p=p1;p1=p2;p2=p;
	}

	printf("a=%d\nb=%d\n", a,b);
	printf("max=%d\nmin=%d\n", *p1,*p2);	

	return 0;
}
