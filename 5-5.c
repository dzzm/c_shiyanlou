#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,disc,p,q,x1,x2;

	printf("Please input 3 numbers:");
	scanf("%lf %lf %lf", &a,&b,&c);

	disc = b*b - 4.0*a*c;
	p = -b/(2*a);
	q = sqrt(disc)/(2*a);
	x1 = p + q;
	x2 = p - q;

	printf("\nx1=%7.2lf\nx2=%7.2lf\n", x1,x2);

	return 0;
}
