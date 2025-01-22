// To read user name and count the character number of the username(string)
#include<stdio.h>
int main()
{
	int i; 
	char name[30];
	printf(" Enter Name");
	gets(name);
	for(i=0; name[i]!='\0';i++);
	printf("Count =%d",i);
	return 0;
	
}
