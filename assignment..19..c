// to read percentage and find out  whether student has passed or failed.A student is passed only when his marks is more than or equal to 50
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	if(marks>=50)
	
	{
	printf("Student passed the exam");
}
else
{
	printf("Student failed the exam");
}
return 0;
	}
