// to display cube of  first 5 number
#include<stdio.h>
	float cube(float num)
  {
return num*num*num;
	}	
	
	int main()
	{
		float  num, cube_root;
	printf("Enter the number:");
	scanf("%f",&num);
	cube_root=cube(num);
	printf("The cube of number is %.3f\n",cube_root);
	return 0;
	}
		
      
