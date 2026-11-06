//79. Write a C program to check whether a number is Prime number or not.
#include <stdio.h>
void main()
{
	int num,i, flag=1;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=2;i<num;i++)
	{
		if(num%i == 0) 
		{
			flag = 0;
			break;
		}
	}
	if(flag == 0)
	{
		printf("%d is the not prime number\n", num);
	}
	else
	{
		printf("%d is a prime number\n", num);
	}
}
