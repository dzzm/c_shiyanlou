#include<stdio.h>
#include<string.h>

int main()
{
	char str1[16];
	char str2[18];

	gets(str1);
	gets(str2);

	printf("%s\n", strcat(str1, str2));
	printf("The length of the string is %d.", strlen(strcat(str1, str2)));

	return 0;
}	
