#include<stdio.h>

int main()
{
	int i,j,tmp,a[10];

	printf("Please enter 10 numbers:\n");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);

	for(j=0; j<9; j++)
	{
		for(i=0; i<9-j; i++)
		{
			if(a[i+1] > a[i])
			{
				tmp = a[i+1];
				a[i+1] = a[i];
				a[i] = tmp;		
			}
		}
	}

	printf("The sorted numbers are:\n");
	for(i=0; i<10; i++)
		printf("%d\t", a[i]);
	printf("\n");

	return 0;
}
