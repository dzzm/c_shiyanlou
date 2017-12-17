#include<stdio.h>

int main()
{
	int fun(int m, int array[20]);
	int m, n, i, a[20];
	
	printf("Please input a number:\n");
	scanf("%d", &m);

	n = fun(m, a);
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);

	return 0;
}

int fun(int m, int array[20])
{
	int n=0, i, j=0;
	
	for(i=1; i<=m; i++)
	{
		if((0 == i%7) || (0 == i%11))
		{
			array[j] = i;
			j++;
			n++;			
		}
	}

	return n;
}
