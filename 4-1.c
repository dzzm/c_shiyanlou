#include<stdio.h>
#include<float.h>

int main()
{
	printf("The smallest value of positive non-zero float is %.3e\n", FLT_MIN);
	printf("The biggest value of float is %0.3e\n", FLT_MAX);
	printf("The smallest value of positive non-zero double is %.3e\n", DBL_MIN);
	printf("The biggest value of double is %0.3e\n", DBL_MAX);

	return 0;

}

