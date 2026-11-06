// roots of quadratic equation 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int a,b,c;
	printf("enter the coefficients of quadratic equation\n");
	scanf("%d%d%d", &a,&b,&c);
        float d= ((b*b) - (4*a*c));
	if((a == 0) && (b==0) && (c==0))
	{
		printf("roots can't be determined\n");
		exit(1);
	}
	else if(d==0)
	{      float root1=((-b)/((2.0)*a));
	       float root2=((-b)/((2.0)*a));
	       printf("roots are real and equal %.2f%.2f", root1,root2);
	}
	else if (d>0)
	{
		float root1 = ((-b)+sqrt(d))/((2.0)*a);
		float root2 = ((-b)-sqrt(d))/((2.0)*a);
		printf("roots of the quadratic equation are %.2f and %.2f\n", root1,root2);
	}
	else
	{
		d=-d;
		float real = ((-b)/(2.0*a));
		float img = (sqrt(d))/((2.0)*a);
		printf("root1 is  %.2f + i%.2f\n", real,img);
		printf("root2 is  %.2f - i%.2f\n", real,img);
	}
}


