//76. Write a C program to find HCF (GCD) of two numbers.(highest common factor)
#include <stdio.h>
void main()
{
	int n1, n2, HCF,i;
	printf("enter any two numbers\n");
	scanf("%d%d", &n1,&n2);
	int min = (n1 < n2) ? n1 : n2;
	for(i=1; i<=min;i++)
	{
		if((n1%i) == 0 && (n2%i == 0))
		{
			HCF = i;
		}	
	}
	printf("hcf of the two numbers %d and %d is %d\n", n1,n2, HCF);
}
