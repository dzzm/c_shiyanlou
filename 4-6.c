#include<stdio.h>

int main()
{
	int cardNum;
	char name[20];

	printf("************************************************\n");
	printf("****Welcome to the books management system!*****\n");
	printf("************************************************\n");
	printf("~~~~~\t\t\t\t\t~~~~~\n");
	printf("\nPlease input your card number:");
	scanf("%d", &cardNum);
	printf("\nplease input you name:");
	scanf("%s", &name);
	printf("\nWelcome %s! Your card number is %d.\n", name,cardNum);

	return 0;
}
