#include<stdio.h>

int main()
{
	float oil_volume;
	float oil_kg;
	float oil_density;
	float area_per_kg;
	float max_area;

	oil_volume = 0.1;
	oil_density = 850;
	area_per_kg = 0.85;

	oil_kg = oil_volume * oil_density;
	max_area = oil_kg / area_per_kg;	
	printf("Maximum farming area are %.2f mu.\n", max_area);

	return 0;
}
