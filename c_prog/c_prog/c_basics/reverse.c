#include <stdio.h>
int main()
{
	int n,reverse_num=0;
	printf("enter the number ");
	scanf("%d", &n);
	while(n>0)
	{

		int digit =n%10;
		reverse_num=reverse_num*10+digit;
		n=n/10;
	}
	printf("%d", reverse_num);
}

