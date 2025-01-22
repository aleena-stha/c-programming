// to make such pattern with a right angle with number increased by 1
#include<stdio.h>
int main ()
{
	int i, j, m,p=1;
	
	printf("Enter number of lines:");
	scanf("%d",&m);

	for (i=1; i<=m; i++)
	{
		for(j=1; j<=i ;j++)
		     printf(" %d",p++);
		printf("\n");
	}
	return 0;
}
