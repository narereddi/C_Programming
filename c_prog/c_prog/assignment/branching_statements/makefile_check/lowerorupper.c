//lower case or upper case 
#include <stdio.h>
void main()
{
	char ch;
	printf("enter the any character\n");
	scanf("%c", &ch);
	if(ch>='a' && ch<='z')
	{
		printf("%c is a lower case alphabet\n", ch);
	}
	else if( ch>='A' && ch<='Z')
	{
		printf("%c is a upper case alphabet\n", ch);
	}
	else
	{
		printf(" it is not a alphabet\n");
	}
}
