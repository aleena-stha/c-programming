// To read user name and count the character number of the username(string)
// reverse the name given by user
#include<stdio.h>
int main()
{
	int i, r;
	char name[30];
	printf(" Enter Name");
	gets(name);
	for(i=0; name[i]!='\0';i++);
	printf("Count =%d",i);
	for (r=i-1;r>=0;r--)
	{
	printf("\t%c",name[r]);
	}
	return 0;	
}
