#include<stdio.h>

int main()
{
	float radius, diameter;
	float circumference, area;
	float pi = 3.1415926;

	printf("Please enter a diameter:");
	scanf("%f", &diameter);

	radius = diameter / 2;
	circumference = pi * diameter;
	area = pi * radius * radius;

	printf("\nThe circumference is %f\n", circumference);
	printf("\nThe area is %f\n", area);

	return 0;

}
