#include<stdio.h>

int main()
{
	double number1=0.0;
	double number2=0.0;
	char operator;

	printf("\nEnter the calculation!\n");
	scanf("%lf%c%lf", &number1,&operator,&number2);

	switch (operator)
	{
		case '+':
		printf("=%lf\n", number1+number2);
		break;
		
		case '-':
		printf("=%lf\n", number1-number2);
		break;

		case '*':
		printf("=%lf\n", number1*number2);
		break;

		case '/':
		if (0==number2)
		{
			printf("\n\nDivided by zero error!\n");
			break;
		}
		else
		{
			printf("=%lf\n", number1/number2);
			break;

		}
		case '%':
		if (0==(long)number2)
		{
			printf("\n\nDivided by zero error!\n");
			break;
		}
		else
		{
			printf("=%ld\n", (long)number1%(long)number2);
			break;
		}
		default:
			printf("\n\nCalcualtion Error!\n");

	}

	return 0;
}
