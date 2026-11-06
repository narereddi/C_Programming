#include <stdio.h>
void main()
{
	int a,b,c;
	float d, root1, root2, img, real;
	printf("enter the coefficients of quadratic equation\n");
	scanf("%d%d%d", &a,&b,&c);
	if( (a==0) && (b==0) && (c==0) )
	{
		printf("roots can't be determined\n");
		exit(0);
	}
	else
	{
		d= ((b*b) - (4*a*c));
