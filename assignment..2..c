// Read three numbers and find product of numbers
#include<stdio.h>
int main()
{
	int s1,s2,s3,product;
	printf("Enter three numbers:");
	scanf("%d%d%d",&s1,&s2,&s3);
	product=s1*s2*s3;
	printf(" Product is %d*%d*%d=%d",s1,s2,s3,product);
	return 0;
}
