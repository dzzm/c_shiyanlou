#include<stdio.h>

int main()
{
	double unit_price = 3.5;
	double discount1 = 0.05;
	double discount2 = 0.10;
	double discount3 = 0.15;
	double total_price = 0.0;
	int number = 0;

	printf("Please enter the number you want to buy:\n");
	scanf("%d", &number);

	total_price = number * unit_price * (1 - (number>50?discount3:
						 (number>20?discount2:
						 (number>10?discount1:0.0))));

	printf("The total price for %d is %.2lf\n", number,total_price);

	return 0;
}
