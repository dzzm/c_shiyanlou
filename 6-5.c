#include<stdio.h>

int main()
{
	char grade;

	printf("Your grade:\n");
	scanf("%c", &grade);
	printf("Your score:\n");

	switch (grade)
	{
		case 'a': printf("85~100\n");break;
		case 'b': printf("70~84\n");break;
		case 'c': printf("60~70\n");break;
		case 'd': printf("<60\n");break;
		default: printf("Error!\n");
	}

	return 0;
}
