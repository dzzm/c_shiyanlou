#include<stdio.h>

int main()
{
	int i;
	char a[]="I am a programmer.", b[20];

	for(i=0; *(a+i)!='\0'; i++)
		*(b+i) = *(a+i);
	*(b+i) = '\0';
	printf("%s\n", a);
	for(i=0; *(b+i)!='\0'; i++)
		printf("%c", b[i]);
	printf("\n");

	return 0;
}
