// palndrome 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],revstr[30];
	int cmp;
	gets(str);
	
	strcpy(revstr,str);// copy andvalue stored in revstr
	puts(revstr);
	strrev(revstr);//reverse
	cmp=strcmp(str,revstr); // compare
	
	if(cmp==0)
	{
		
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	return 0;
}
