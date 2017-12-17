#include<stdio.h>

int main()
{
	float average(float array[10]);
	float score[10], avg;
	int i;

	printf("Please input scores:\n");
	for(i=0; i<10; i++)
		scanf("%f", &score[i]);
	printf("\n");

	avg = average(score);

	printf("The average score is %.2f.\n", avg);

	return 0;
}

float average(float array[10])
{
	float sum=0, avg;
	int i;
	
	for(i=0; i<10; i++)
		sum += array[i];

	avg = sum/10;

	return avg;
}
