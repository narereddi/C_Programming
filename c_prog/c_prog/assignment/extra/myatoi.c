#include <stdio.h>

int my_atoi(char str[])
{
	int i=0, n=0;
	while(str[i] !='\0')
	{

		if(str[i] >='0' && str[i] <='9')
		{
			n =  n*10 + (str[i] - '0');
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
	char str[]= "1981";
	int num;
	num = my_atoi(str);
	printf("string integer is %s\n", str);
	printf("integer is %d\n", num);
}
	
