#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20], str2[]="China";

	strcpy(str1, str2);
	printf("%s", str1);

	return 0;
}
