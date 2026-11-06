#include <stdio.h>
void main()
{
	int i, n, f1=0, f2=1, f3;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)\
	{
		printf("%d ", f1);
		f3 = f1 + f2;
		f1 = f2; 
		f2 = f3;
	}
}
