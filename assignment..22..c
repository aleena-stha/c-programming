// c program to read any four num and print the greatest and smallest among them
#include<stdio.h>
int main()
{
int i,a[4],greatest,smallest;
   for(i=0;i<4;i++)
   {
	printf(" Enter a[%d]:",i);
	scanf("%d",&a[i]);
    }

   greatest=a[0];
   for(i=0;i<4;i++)
    {
	if(a[i]> greatest);
	greatest=a[i];
	}
	printf("\nThe greatest=%d",greatest);
	
	smallest=a[0];
	for(i=0;i<4;i++)
	{
		if (a[i]<smallest)
		smallest=a[i];
	}
	printf("\nThe smallest=%d",smallest);
	return 0;
}
	
	
	
	
	
		
