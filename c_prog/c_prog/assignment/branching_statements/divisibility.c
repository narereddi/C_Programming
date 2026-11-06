//check divisibility of 5 and 11
#include <stdio.h>
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d", &num);
	if(num%5==0&&num%11==0)
	{
		printf("number %d is divixible by 11 and 5\n", num);
	}
	else
	{
		printf("number %d is not divisible by 11 and 5\n", num);
	}
}
