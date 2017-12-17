#include<stdio.h>

int main()
{
	float radius,height,circumference,area,volume;
	float pi=3.1415926;

	printf("Please input the radius of the cylinder:");
	scanf("%f", &radius);
	printf("\nPlease input the height of the cylinder:");
	scanf("%f", &height);

	circumference = 2*pi*radius;
	area = pi*radius*radius;
	volume = area*height;

	printf("The circumference of the cylinder bottom is %.2f\n", circumference);
	printf("The area of the cylinder bottom is %.2f\n", area);
	printf("The volume of the cylinder is %.2f\n", volume);

	return 0;
}
