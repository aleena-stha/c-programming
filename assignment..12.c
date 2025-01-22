// to find area of circle
#include<stdio.h>
int main()
{
	float radius,area;
	printf("Enter the given radius(r):");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("Area of circle=%.3f",area);
	return 0;
}
