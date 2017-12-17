#include<stdio.h>

int main()
{
	int i, num;
	float sum, avg, a[20];

	for(i=0; i<20; i++)
		scanf("%f", &a[i]);

	sum = 0;
	for(i=0; i<20; i++)
		sum += a[i];
	avg = sum/20;
	num = 0;
	for(i=0; i<20; i++)
	{
		if(a[i] > avg)
			num++;
	}

	printf("The average number is %.2f.\n", avg);
	printf("There are %d numbers bigger than average.\n", num);


	return 0;
}
