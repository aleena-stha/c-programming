//  C program to read two numbers and find sum of the numbers
#include<stdio.h>
int main()
{
int num1, num2, sum;
printf("Enter two numbers\n");
scanf("%d %d",&num1,&num2);
sum= num1 +num2;  // calculate sum
printf("The sum of two number = %d",sum);
return 0;
}
