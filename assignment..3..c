// Read p,t,n and r and find the simple interest,amount,compound interest and compound amount
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,n;
	float simple_interest;
	 float amount,compound_interest, compound_amount;
	printf("Enter the principal amount (p):");
	scanf("%f", &p);
	printf("Enter the time in year(t) :");
	scanf("%f",&t);
	printf("Enter the rate in percent (r) :");
	scanf("%f",&r);
	printf(" Enter the number of times interest is compounded per year(n) :");
	scanf("%f",&n);
	simple_interest=(p*t*r)/100;     
	printf("The simple interest is %.2f\n",simple_interest);
	amount=simple_interest+p;        
	printf(" The amount is %.2f",amount);
	compound_interest=p*(pow(1+r/n,n*t)-1);
	printf("  Compound interest = %.3f\n",compound_interest);
	compound_amount=p+compound_interest;
	printf(" Compound amount = %.3f\n",compound_amount);
	return 0;	
}
