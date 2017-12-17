#include<stdio.h>

int main()
{
	void copy_string(char a[], char b[]);
	char a[]="I am a programmer.";
	char b[]="You are a programmer.";

	printf("string a=%s\nstring b=%s\n", a,b);
	copy_string(a, b);
	printf("string b=%s\n", b);

	return 0;
}

void copy_string(char a[], char b[])
{
	int i=0;

	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';

}
