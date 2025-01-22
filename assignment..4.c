// find the area of the rectangle
#include<stdio.h>
int main()
{
	int length,breadth,area;
	printf(" Enter the length(l):\n");
	scanf("%d",&length);
	printf("Enter the breadth(b):\n");
	scanf(" %d",&breadth);
	area=length*breadth;
	printf("Area is %d*%d=%d\n",length,breadth,area);
	return 0;		
}
