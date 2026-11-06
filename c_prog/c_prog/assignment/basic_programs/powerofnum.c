//power of a given number 
#include <stdio.h>
#include <math.h>
void main()
{
	int num, power, result;
	printf("enter the number and power\n");
	scanf("%d%d", &num, &power);
        result=pow(num,power);
	printf("result of base %d to the power of %d is %d\n",num, power, result );
}
