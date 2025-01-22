// read any two number and swap them
#include<stdio.h>
int main()
{
float num1,num2,temp;
	printf("The first num:");
	scanf("%f",&num1);
	printf("The second num:");
	scanf("%f",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("The first num=%.2f\n",num1);
	printf("The second num=%.2f\n",num2);
	return 0;
}
