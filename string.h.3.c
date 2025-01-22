// upper and lower
#include<stdio.h>
#include<string.h>
int main()
{
	char fn[30]="ISMT";
	char sn[30]="College";
	printf("Value of fn & sn\n");
	puts(fn);
	puts(sn);
	strcat(fn,sn); // cat-joins string
	puts(fn);
	strlwr(fn); // lower case
	puts(fn);
	strupr(sn); // upper case
	puts(sn);
	return 0;
	
	
}
