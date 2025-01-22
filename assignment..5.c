//find the perimeter of rectangle
#include<stdio.h>
int main ()
{
	float length,breadth,perimeter;
	printf(" Enter the length of rectangle(l):");
	scanf("%f",&length);
	printf(" Enter the breadth of rectangle(b):");
	scanf("%f",&breadth);
	perimeter=2*(length+breadth);
	printf(" Perimeter=%.3f",perimeter);
	return 0;
}

