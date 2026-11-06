#include <stdio.h>
#include "declare.h"
//#include "definitions.c"
//int swap(int , int);
int main()
{

	int num;
	printf("1.to swap the numbers\n");
	printf("2.gcd of the numbers\n");
	printf("3.prime or not\n");
	printf("4.fibonacci\n");
	printf("5.reverse number\n");



	printf("print any number\n");
	scanf("%d", &num);
	

	switch(num)
	{
		//to swap the numbers.
		case 1: 
			int a=10, b=20; 
			printf("before swapping a=%d and b=%d\n", a,b);
			swap(a, b);
			printf("after swapping a=%d and b=%d\n", a, b);
			
		//find gcd of two numbers

		case 2:

			int n1, n2, k;
			printf("enter the two numbers\n");
			scanf("%d%d", &n1, &n2);
			k=gcd(n1, n2);
			printf("gcd of the given numbers %d and %d is %d\n", n1, n2, k);
			
	
		//prime or not	
		case 3:
			
			int n;
			printf("enter the any number\n");
			scanf("%d", &n);
			prime(n);
			break;
		//fibanocci
		case 4:
			int m;
			printf("how many fibonacci numbers needs to be printed\n");
			scanf("%d", &m);
			fibanocci(m);
			
		
		//number reverse
		case 5:
			int c, d;
			printf("enter any number\n");
			scanf("%d", &c);
			d = reverse(c);
			printf("reversed number is %d\n", d);
			
	}
	
}
