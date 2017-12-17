#include<stdio.h>

int main()
{
	int num=0;

	printf("Please enter an integer between 1 and 10:");
	scanf("%d", &num);

	if(num > 5)
		printf("You entered %d which is more than 5.\n", num);
	if(num < 6)
		printf("You entered %d which is less than 6.\n", num);

	return 0;
}
