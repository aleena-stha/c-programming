// to calculate electricity bill of a consumer by reading the unit and number of days gone after reading the meter
#include<stdio.h>
int main()
{
	int  days; 
	float unit,bill;
	float upto_50u=80, upto_150u=upto_50u+100*7.30, upto_250u=upto_150u+100*9.50;
	printf("Enter total units consumed:");
	scanf("%f",&unit);
	printf("Enter the days after bill was paid:");
	scanf("%d",&days);
	if (unit<=50)
    {
        bill=80;
  }
    else if (unit<=150)
	 {
	 bill=upto_50u+(unit-50)*7.30;
	 }
	else if(unit<=250)
	{bill= upto_150u+(unit-150)*9.50;
    
	}else 
	{
     bill= upto_250u+(unit-250)*11;
    }
	 // Calculating raw bill either discount,charge or  nothing according to duration of payment
	 if(days<=7)
	 {
	 	bill-=(bill*0.03);
	 }
	 else if( days>7 && days<=22)
	 {}
	 else if( days>22 && days<=30)
	 {
	 	bill+=(bill*0.05);
	 }
	 else if( days>30 && days<=40)
	 {
	 	bill+=(bill*0.1);
	 }
	 else if( days>40 && days<=60)
	 {
	 	bill+=(bill*0.25);
	 }
	 else {
	 	printf("Your payment date is over:");
	return 0;
} 
printf("The amount to be paid by customer is %.2f",bill);
return 0;
}

