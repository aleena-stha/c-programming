// C program to display right angle using asterik
#include<stdio.h>
int main ()
{
	int i, j, m;
	printf("Enter m:");
	scanf("%d",&m);
	
	for (i=1; i<=m; i++)
	{
		for(j=1; j<=m-i ;j++)
		     printf("");
		for(j=1; j<=2*i-1 ;j++)
		     printf("*");
		printf("\n");
	}
	m--;
		for (i=1; i<=m; i++)
	{
		for(j=1; j<=i;j++)
		     printf("");
		for(j=1; j<=2*(m-i)+1; j++)
		     printf("*");
		printf("\n");
	}
	return 0;
}
