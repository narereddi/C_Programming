//74. Write a C program to enter any number and print all factors of the number.
#include <stdio.h>
void main()
{
	int num;
	printf("enter any number\n");
	scanf("%d", &num);
	printf("factors of the number %d are ", num);
	for(int i=1;i<=num; i++)
	{
		if(num%i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
