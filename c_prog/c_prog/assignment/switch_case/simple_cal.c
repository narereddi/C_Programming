#include <stdio.h>
void main()
{
	int a, b, sum, subtraction, mul, modulous;
	float division;
	char ch;
	printf("enter ant arthematic operator to perform\n");
	scanf("%c", &ch);
	switch(ch)
	{
		case '+' :
			 printf("enter any two numbers\n");
			 scanf("%d%d", &a,&b);
			 sum = a+b;
			 printf("sum is %d + %d is %d\n", a,b,sum);
			 break;
                case '-' :
			 printf("enter any two numbers\n");
			 scanf("%d%d", &a,&b);
			 subtraction = a+b;
			 printf("sum is %d - %d is %d\n", a,b,subtraction);
			 break;
		case '*' :
			 printf("enter any two numbers\n");
			 scanf("%d%d", &a,&b);
			 mul = a*b;
			 printf("muil is %d * %d is %d\n", a,b,mul);
			 break;
		case '/' :
			 printf("enter any two numbers\n");
			 scanf("%d%d", &a,&b);
			 division = a/b;
			 printf("sum is %d / %d is %f\n", a,b,division);
			 break;
		case '%' :
			 printf("enter any two numbers\n");
			 scanf("%d%d", &a,&b);
			 modulous = a%b;
			 printf("modulous is %d %% %d is %d\n", a,b,modulous);
			 break;
		default : 
			printf("invalid character\n");
		}
}
