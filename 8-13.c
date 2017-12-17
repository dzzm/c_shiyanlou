#include<stdio.h>

int main()
{
	int i, HoleNum=0;
	int a[9] = {0};

	for(i=0; i<1000; i++)
	{
		HoleNum += i+1;
		a[(HoleNum%10-1)] = 1;
	}
	for(i=0; i<9; i++)
	{
		if(a[i] != 1)
			printf("%d\n", i+1);
	}

	return 0;
}
