//check if a number is poitive or negative or zero.
#include <stdio.h>
void main()
{	int num;
	printf("enter the number\n");
	scanf("%d", &num);
	if(num>0)
	{
		printf("%d is positive\n",num);
	}
	else if(num<0)
	{
		printf("%d is negative number\n",num);
	}
	else
	{
		printf("%d is zero\n",num);
	}
}
	
