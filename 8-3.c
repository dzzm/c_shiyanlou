#include<stdio.h>

int main()
{
	int i,j,row,column,max;
	int a[3][4]={{3,4,16,2},{7,5,1,9},{11,23,3,8}};

	max=0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				column = j;
			}
		}
	}

	printf("max=%d\nrow=%d\ncolumn=%d\n", max,row,column);

	return 0;
}
