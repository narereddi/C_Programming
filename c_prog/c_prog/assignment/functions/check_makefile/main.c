//to implement the problems that defined in other files and calling from here

#include <stdio.h>
#include "declare.h"
//int swap(int , int);
int main()
{

	int num;
	char ch;
  do{
	printf("1.to swap the numbers\n");
	printf("2.gcd of the numbers\n");
	printf("3.prime or not\n");
	printf("4.fibonacci\n");
	printf("5.reverse number\n");
	printf("6.count no of digits in a number\n");
	printf("7.palindrome or not\n");
	printf("8. sum of prime\n");





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
			break;
		//find gcd of two numbers

		case 2:

			int n1, n2, k;
			printf("enter the two numbers\n");
			scanf("%d%d", &n1, &n2);
			k=gcd(n1, n2);
			printf("gcd of the given numbers %d and %d is %d\n", n1, n2, k);
			break;
	
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
			break;
		
		//number reverse
		case 5:
			int c, d;
			printf("enter any number\n");
			scanf("%d", &c);
			d = reverse(c);
			printf("reversed number is %d\n", d);
			break;
		
		// count digits	
		case 6:
			int e, count_digit;
			printf("enter any number\n");
			scanf("%d", &e);
			count_digit= count(e);
			printf("no of digits in a number is %d", count_digit);
			break;
		
		// palindrome
		case 7:
			int f, g;
			printf("enter any number to check palindrome\n");
			scanf("%d", &f);
			g = palindrome(f);
			if(g ==0)
			{
				printf("%d is not palindrome\n", f);
			}
			else
			{
				printf("%d is palindrome\n", f);
			}

		//sum of prime 
		case 8:
			int h;
			printf("enter any number\n");
			scanf("%d", &h);
			sum_of_prime(h);

		//LCM
/*
		case 9:
			int i1, i2;
			printf("enter any two numbers\n");
			scanf("%d%d", i1, i2);
			lcm(i1 ,i2);
*/		
	}
	
		printf("\ndo you want to continue press y\n");
		scanf(" %c", &ch);
			
   }while(ch == 'y' || ch == 'Y');

}
