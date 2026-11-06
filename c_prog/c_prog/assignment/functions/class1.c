//practice how to declare, call and define a function



//1. without arguments and without return
/*
#include <stdio.h>

void swap(void);


void swap()
{
	int a=22, b=43, temp;
	temp= a;
	a=b;
	b=temp;
}
	
void main()
{

	int a=10, b=20;
	printf("values of a and b before swappig are %d %d\n", a,b);
	
	swap();
	printf("values of a and b after swappig are %d %d\n", a,b);
}

*/	


//2. without arguments and with return

/*
#include <stdio.h>
int swap(void);


int swap()
{
	int a=22, b=43, temp;
	temp= a;
	a=b;
	b=temp;
	return b;
}
	
void main()
{

	int a=10, b=20, h;
	printf("values of a and b before swappig are %d %d\n", a,b);
	
	h= swap();
	printf("values of a and b after swappig are %d %d\n", a,b);
	printf("h value %d\n", h);
}
*/

//3. with arguments and without return.

/*
#include <stdio.h>
void swap(int, int);


void swap(int a, int b)
{
	//int a=22, b=12;
	int temp;
	temp= a;
	a=b;
	b=temp;
	//return b;
}
	
void main()
{

	int a=10, b=20;
	printf("values of a and b before swappig are %d %d\n", a,b);
	
	swap(a, b);
	printf("values of a and b after swappig are %d %d\n", a,b);
	//printf("h value %d\n", h);
}
*/

//4. with arguments and with return value 


/*
#include <stdio.h>
int swap(int, int);


int swap(int a, int b)
{
	//int a=22, b=12;
	int temp;
	temp= a;
	a=b;
	b=temp;
	return 69;
}
	
void main()
{

	int a=10, b=20, k;
	printf("values of a and b before swappig are %d %d\n", a,b);
	
	k= swap(a, b);
	printf("values of a and b after swappig are %d %d\n", a,b);
	printf("h value %d\n", k);
}

*/


/*
#include <stdio.h>

int swap(int * , int *);
	
int swap(int *a, int *b)
{
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a=10, b=20;
	printf("before swapping a=%d and b=%d\n", a, b);
	
	swap(&a, &b);
	printf("after swapping a=%d and b=%d\n", a, b);
}
*/


