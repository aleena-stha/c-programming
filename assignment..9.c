// find perimeter of triangle
#include<stdio.h>
int main()
{
	float a,b,c,perimeter;
	printf(" The first side of triangle(a):");
	scanf("%f",&a);
	printf(" The  second side of triangle(b):");
	scanf("%f",&b);
	printf(" The third side of triangle(c):");
	scanf("%f",&c);
	perimeter=(a+b+c);
	printf(" Perimeter=%.3f",perimeter);
	return 0;
	
}
