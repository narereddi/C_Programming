//77. Write a C program to find LCM of two numbers.
#include <stdio.h>
void main()
{
	int n1, n2, i, lcm, min, hcf;
	printf("enter any two numbers\n");
	scanf("%d%d", &n1,&n2);
	min = (n1 < n2) ? n1 : n2;
	for(i=2; i<=min; i++)
	{
		if((n1%i == 0) && (n2%i==0))
		{
			hcf = i;
		}
	}
	lcm = (n1*n2)/hcf;
	printf("%d\n", lcm);
}
