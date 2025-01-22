// program to read the calculate percentage scored by students who read five subjects and their grades.
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,per;
	float grade;
	printf("Enter marks of 5 subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5;
	printf("Total = %d\n",total);
	printf("Percentage=%d\n",per);
	if (per>=80)
    {
	printf("Grade: Distinction");
	}
    else if (per>=60)
     {
	 printf("Grade: First Division");
	  } 
    else if (per>=45)
	{
	printf("Grade: Second Division");
	}
	 else  if (per>=32)
	 {
	 printf("Grade First Division");
	 }
	else 
	{
	printf("Grade :N/A");
	}
	    return 0;
	}
