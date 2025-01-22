// to find factorial
#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
	long int n;
	printf("Enter a positive integer:");
	scanf("%ld",&n);
	printf("factorial of %d=%ld",n,multiplyNumbers(n));
	return 0;
}

 long  multiplyNumbers(int n)
{
  if(n>=1)
	 return n*multiplyNumbers(n-1);
	else
	return 1;
}
