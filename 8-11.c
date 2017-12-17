#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char str[30];
	char ch[3][30];

	for(i=0; i<3; i++)
		gets(ch[i]);

	strcpy(str, ch[0]);
	for(i=1; i<3; i++)
	{
		if(strcmp(ch[i], str) < 0)
			strcpy(str, ch[i]);
	}

	printf("The result is:\n%s", str);

	return 0;
}
