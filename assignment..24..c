// to read salary amount ,amount of sales made by employee and calculate  bonus to be received by employee along with total salary receive by employee.
#include<stdio.h>
int main()
{
	float basic_salary;
	float Bonus,gross_salary;
	printf("Enter basic salary:");
	scanf("%f",&basic_salary);
	if (basic_salary<=10000)
    {
      Bonus=basic_salary*0.1;
	}
    else if (basic_salary<=50000)
     {
	 Bonus=basic_salary*0.15;
	  } 
    else 
	{
	Bonus=basic_salary*0.2;
    }
	 
	 gross_salary=basic_salary+Bonus;
	 printf(" Bonus:%.2f\n",Bonus);
	 printf("Gross salary:%.2f\n",gross_salary);
	    return 0;
	}
