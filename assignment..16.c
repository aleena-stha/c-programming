// To read a number and print whether number is positive or negative number
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>0)
	{
	printf("The number is positive\n");
	}
	else{
		printf("The number is negative\n");
	}
	return 0;
}
