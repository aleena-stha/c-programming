// To read a number and print whether the number is multiple of 9
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%9==0)
	{
		printf("The number is multiple of 9");
	}
	else
	{
		printf("The number is not multiple of 9");
	}
	return 0;
}

