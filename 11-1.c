#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch, filename[10];

	printf("Please enter a file name:");
	scanf("%s", filename);
	ch = getchar();

	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("\nUnable to open the file!\n");
		exit(0);
	}
	printf("Please enter a string end with a #:");
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	
	return 0;
}

