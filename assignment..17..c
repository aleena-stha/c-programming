// To read age of person and print whether the person is eligible to get married .In case of boy age limit is 28 and girl age limit is 25
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	if(age>=28)
	{
		printf("Boy is eligible to get married\n");
	}
	else{
	printf("Boy is not eligible to get married\n");
	}
	if(age>=25)
	{
		printf("Girl is eligible to get married\n");
	}
	else
	{
		printf("Girl is not eligible to get married\n");
	}
	return 0;
}
