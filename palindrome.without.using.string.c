//string array use
// To check whether given name is palindrome or not without string 

   
# include<stdio.h>
int main()
{
	char str[30],revstr[30];
	int i,j,count;
	printf("Enter the word:");
	gets (str);
	for(i=0;str[i]!='\0';i++); // semicolon is used here since there is no body part
	printf("count=%d\n",i);
	count=i;
	j=count-1;
	for(i=0;i<count;i++)
	{
		revstr[j]=str[i];
		j--;
	}
	revstr[count]='\0';
	printf("Reverse:");
	puts(revstr);
	
	int b=0;
	
	for(i=0;i<count;i++)
	{
		if(str[i]==revstr[i])
		{
			b++;
		}
	}
	
	if(b==count)
	{
		printf("Word is palindrome");
	}
	else
	{
		printf("Word is not palindrome");
		
	}
	
	return 0;
}
    
