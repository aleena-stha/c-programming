// to read a number and print whether number is odd or even number
#include<stdio.h>
int main()
{
	int num;
	
	printf("Take a number from user:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
	printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
	return 0;
}
