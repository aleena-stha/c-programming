// C program to display the right angle triangle using an asterisk
#include<stdio.h>
int main()
 {
	int i, j;
	
	for (i=1; i<=4; i++)   /*Loop for number of lines*/
	{
		for(j=1; j<=i; j++) /*Loop for number of star on line*/
		  printf("*");
		printf("\n"); /* for next line of pyramid*/
		
	}
	return 0;
}
