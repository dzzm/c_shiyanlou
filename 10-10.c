#include<stdio.h>

int main()
{
	int arr[10]={0};
	int i, j, *p;
	p = arr;

	for(i=0; i<9; i++)
	{
		for(j=1; j<=3; j++)
		{
			while(*p==3)
			{
				p++;
				if(10==(p-arr)) p=arr;
			}
			*p = j;
			p++;
			if(10==(p-arr)) p=arr;
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%d\t", arr[i]);
	}


	return 0;
}
