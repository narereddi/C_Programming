#include <stdio.h>
void main()
{
	int i, num, sum=0, digit, factorial=1, original_num;
	printf("enter any number\n");
	scanf("%d", &num);
	original_num = num;
	while(num >0)
	{
		digit = num %10;
		for(i=1; i<=digit; i++)
		{
			factorial = factorial*i;
			sum = sum + factorial;
		}
		num = num/10;
	}
	if(original_num == sum)
	{
		printf("%d is strong number\n", original_num);
	}
	else
	{
		printf("%d is not strong number\n", original_num);
	}
}
	
