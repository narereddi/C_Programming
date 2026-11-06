#include <stdio.h>


int ascii_atoi(char []);
	
int ascii_atoi(char str[20])
{	
	int i=0, n=0;
	
	while(str[i] !='\0')
	{
		if(str[i] >='0' && str[i] <= '9')
		{
	
			n = n*10 + ((int)str[i] - 48);
		}
		else
		{
			break;
		}
		i++;
	}
	return n;
}
	
void main()
{
	int num;
	char str[20];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	printf("string integer is %s", str);
	num = ascii_atoi(str);
	printf("integer is %d", num);
}
	
