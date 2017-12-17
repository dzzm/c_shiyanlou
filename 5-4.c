#include<stdio.h>

int main()
{
	char lowerLetter, upperLetter;

	printf("Please enter a lower letter:");
	scanf("%c", &lowerLetter);
	upperLetter = lowerLetter - 32;
	printf("\nThe upper letter is %c\n", upperLetter);

	return 0;
}
