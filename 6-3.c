#include<stdio.h>

int main()
{
	char input;

	printf("Please enter an upper case letter:\n");
	scanf("%c", &input);
	if (input >= 'A' && input <= 'Z')
	{
		input += 'a' - 'A';
		printf("You entered an upper case %c\n", input);
	}
	else
		printf("You did not enter an upper case letter!\n");

	return 0;
}
