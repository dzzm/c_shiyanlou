#include<stdio.h>

int main()
{
	int max(int a, int b);
	int a[10], m, n, i;

	printf("Please input 10 numbers:\n");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);
	printf("\n");

	for(i=1,m=a[0],n=0; i<10; i++)
	{
		if(max(m, a[i]) > m)
		{	
			m = a[i];
			n = i;
		}
	}
	printf("The largest number is %d. It is the %dth number.\n", m,n+1);

	return 0;
}

int max(int a, int b)
{
	return (a>b?a:b);
}
