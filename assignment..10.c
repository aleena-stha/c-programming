// to find volume and surface area of cube
#include<stdio.h>
int main()
{
	float length,volume,surface_area;
	printf("Enter the given edge length:");
	scanf("%f",&length);
	volume=length*length*length;
	printf(" volume of cube  =%.3f\n",volume);
	surface_area=6*length*length;
	printf(" surface area of cube=%.3f",surface_area);
	return 0;
}
 

