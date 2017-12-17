#include<stdio.h>

int main()
{
	char *month[12]={"January", "February", "Marck", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int ip;
	
	printf("Please input a number:");
	scanf("%d", &ip);

	printf("The English of the %dth month is %s.\n", ip, month[ip-1]);	

	return 0;
}
