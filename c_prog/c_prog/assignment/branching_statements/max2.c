//max of three
#include <stdio.h>
void main()
{
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater than %d and %d\n",a,b,c);
	}
	else if(b>a && b>c)
	{
		printf("%d is greater than %d and %d\n",b,a,c);
	}
	else
	{
		printf("%d is greater than %d and %d\n",c,b,a);
	}
}
