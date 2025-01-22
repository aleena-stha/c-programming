// to read purchase amount and calculate discount to be received by customer.Also calculate and print amount to be paid by customer
#include<stdio.h>
int main()
{
	float  purchase_amount;
	float discount,amount_tobepaid;
	printf("Enter shopping amount here:");
	scanf("%f",&purchase_amount);
	if (purchase_amount<=1000)
    {
      discount=purchase_amount*0.5;
  }
    else if (purchase_amount<=5000)
	 {
	 discount=purchase_amount*0.1;
	 }
	else if(purchase_amount<=10000)
	{discount=purchase_amount*0.15;
	}
    else 
	{
     discount=purchase_amount*0.25;
    }
	 
	 amount_tobepaid=purchase_amount-discount;
	 printf(" discount:%.2f\n",discount);
	 printf("Amount to be paid:%.2f\n",amount_tobepaid);
	    return 0;
	}

