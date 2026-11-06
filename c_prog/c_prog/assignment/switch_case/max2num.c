//42. Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>
void main()
{
	int a, b;
	printf("enter the two numbers\n");
	scanf("%d%d", &a, &b);
	switch(a > b)
	{
		case 1 : 
			printf("%d is the greatest\n", a);
			break;
		case 0 :
			switch(b>a)
			{
				case 1 :
					printf("%d is greatest\n", b);
					break;
				case 0 : 
					printf("both are equal\n");
			}
			
	}
}
