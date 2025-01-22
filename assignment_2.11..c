// to make such pattern with a right angle which will repeat a number in a row

#include<stdio.h>
int main ()
{
	int i, j, m;
	printf("Enter number of lines:");
	scanf("%d",&m);
	
	for (i=1; i<=m; i++)
	{
		for(j=1; j<=i ;j++)
		     printf(" %d",i);
		
		printf("\n");
	}
	
	return 0;
}
