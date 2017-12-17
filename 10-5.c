#include<stdio.h>

int main()
{
	void swap(int *, int *);
	int i, j, a[10];

	printf("Please enter 10 numbers:\n");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);

	printf("The original order is:\n");
	for(i=0; i<10; i++)
		printf("%d\t", a[i]);
	printf("\n");
	for(i=0; i<+(9-1)/2; i++)
		swap((a+i), (a+9-i));
	printf("The current order is:\n");
	for(i=0; i<10; i++)
		printf("%d\t", a[i]);
	printf("\n");	

	return 0;
}

void swap(int *p1, int *p2)
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
