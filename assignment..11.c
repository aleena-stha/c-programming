// to find volume and surface area of cuboid
#include<stdio.h>
int main()
{
	float l,b,h,volume,surface_area;
	printf("Enter the given length(l):");
	scanf("%f",&l);
	printf("Enter the given breadth(b):");
	scanf("%f",&b);
	printf("Enter the given height(h):");
	scanf("%f",&h);
	volume=l*b*h;
	surface_area=2*(l*b+b*h+h*l);
	printf("Volume of cuboid(v)=%.3f\n",volume);
	printf(" Surface area(A)=%.3f\n",surface_area);
	return 0;
}
