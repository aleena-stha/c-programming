// Find area of triangle
#include<stdio.h>
int main()
{
	float base ,height,area;
	printf("Enter the given height (h):");
	scanf("%f",&height);
	printf("Enter the  given base of triangle(b):");
	scanf("%f",&base);
	area=0.5*base*height;
	printf(" Area of triangle =%.3f",area);
	return 0;
}
