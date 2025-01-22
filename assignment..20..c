// read any year and print whether the year is leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if (year!=365)
	{
		printf("The year is leap year\n");
	}
	else
	{
		printf("The year is not leap year\n ");
	}
	return 0;
}

