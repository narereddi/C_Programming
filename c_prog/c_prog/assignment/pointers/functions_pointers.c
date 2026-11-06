
#include <stdio.h>


/*

//1. call by reference.
int *large (int *, int*);
	
int main()
{
	int a, b, *p;
	printf("enter the two values\n");
	scanf("%d%d", &a, &b);
	printf("address of a is %p\n", &a);
	printf("address of b is %p\n", &b);
	
	p = large(&a, &b);
	printf("address of larger number %d is  %p\n", *p, p);
}

int *large(int *a, int *b)
{
	if(*a > *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
*/

/*
	//2. passing arrays in functions
	int fun(int [], int);
	
	int fun (int a[10], int size)
	{
		int i;
		for(i=0; i<size; i++)
		{
			printf("%d ", a[i]);
		}
	}
	
	int main()
	{
		int i, size;
		printf("enter size of an array\n");
		scanf("%d", &size);
		int a[size];
		for(i=0; i<size; i++)
		{
			scanf("%d", &a[i]);
		}
		fun(a, size);
	}

*/


/*
	//3. Function Returning Pointer
	
	int* fun( );
	int main()
	{
		int *ptr1;
		ptr1= fun( );
		printf("address of a(printing in main function) is %p\n", ptr1);

		
	}
	int* fun()
	{
		static int a=20;
		printf("address of a(printing in fun definition) is %p\n", &a);
		return &a;
	}
 
*/

/*
	4 — Function Pointer (Pointer to a Function)

	This is a pointer that stores the address of a function.
	Useful for callbacks, dynamic function calls, etc.

	Syntax: 	
	return_type (*pointer_name)(parameter_types);
*/

/*	//this is wrong, this stores the address of variable but not address of function.
	void (*fptr)(int );
	void fun(int );
	void main()
	{
		int a;
		printf("enter any number\n");
		scanf("%d", &a);
		fun(a);
	}
		
	void fun(int a)
	{
		fptr = &a;
		printf("address of a is %p\n", fptr);
		printf("value of a is %d\n", *fptr);
	}

*/
/*
	void fun();
	
	void main()
	{
		void (*fptr)(int );
		fptr = fun;
		fptr(10);
	}
	
	void fun(int a)
	{
		printf("value of a is %d\n", a);
	}
		
*/

/*
	//5. Function Pointer with Arguments
	
	void (*fptr)(int , int);

	void fun(int , int);
	
	void main()
	{
		int a, b;
		printf("enter the two nunbers to add\n");
		scanf("%d%d", &a,&b);
		fptr = fun;
		fptr(a, b);
	}
		
	void fun(int a, int b)
	{
		
		int sum;
		sum = a+b;
		printf("sum of two numbers is %d\n", sum);
	}
*/


/*
	//6. Function Pointer as Argument
	
	int fun ( void (*fptr)(int ,int), int , int );
	
	void add(int a, int b)
	{
		int sum;
		sum = a+b;
		printf("sum of two numbers is %d\n", sum);
	}
	int fun ( void (*fptr)(int ,int), int x, int y)
	{
		fptr(x, y);
	}
	
	void main()
	{
		int a, b;
		printf("enter the two numbers\n");
		scanf("%d%d", &a, &b);
		
		//fptr = add;
		fun(add, a, b);
	}
*/

/*
	//7. Pointer to Function Returning a Value.

	int (*fptr)();
	int fun();
	
	int  main()
	{
		int k;
		fptr = fun;
		k=fptr();
		printf("value of number k is (in main function) return value of a is %d\n", k);
	}
	
	int fun()
	{
		int a;
		printf("enter any number (in fun function)\n");
		scanf("%d", &a);
		
		return a;
	}

	
*/

		
		 	
			
