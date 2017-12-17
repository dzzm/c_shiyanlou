#include<stdio.h>
#include<math.h>

int main()
{
	int i,j;

	for(i=3;i>=-3;i--)
	{
		for(j=-3;j<=3;j++)
		{
			if((abs(i)+abs(j))<=3)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
