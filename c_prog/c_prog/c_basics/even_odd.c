#include <stdio.h>
void evenodd(int n);
void evenodd(int n)
{
	if(n%2==0)
        {
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
}
int main()
{
	int a;
	printf("enter the number ");
	scanf("%d", &a);
	evenodd(a);
}

