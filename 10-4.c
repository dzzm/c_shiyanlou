#include<stdio.h>

int main()
{
	int i, *p, a[10];

	printf("Please enter 10 numbers:\n");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);

	for(i=0; i<10; i++)
		printf("%d\t", *(a+i));
	printf("\n");
	for(i=0,p=a; i<10; i++,p++)
		printf("%d\t", *p);
	printf("\n");

	return 0;
}
