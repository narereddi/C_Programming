#include <stdio.h>

//1
/*
void fun(void);
	
void main()
{
	int i;
	//printf("enter any number\n");
	//scanf("%d", &a);
	
	for(i=0; i<5; i++)
	{
		fun();
	}
}

void fun(void)
{
	static int a=2;
	printf("%d\n", a);
	a= a+2;
}

*/

//2.
/*
int static a=20;
 
void main()
{
	int a;
	printf("%d\n", a);
}
*/


/*
//3. 
int static a=20;
 
void main()
{
	static int a;
	printf("%d\n", a);
}
*/


void fun();
int a=21;
int main()
{
	fun();
}



	
