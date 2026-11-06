#include <stdio.h>
 #include <inttypes.h>
#include <stdlib.h>


void main()
{


/*
	1. //pointer to a integer constant / pointer to constant integer.
	int a = 23;
	const int *ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", &a);
	printf("%p\n", &ptr);
	printf("%d\n", a);
	printf("%d\n", *ptr);
	a=45;
	printf("%d\n", a);
	// *ptr= 9; // you can't able to modify through pointers.
		   // but can modify through direct variable 
	printf("%d\n", *ptr);

*/


/*
    // 2. variable(any variable like 'q') is a constant pointer to a integer

	
	int a = 11;
	int *const ptr= &a;
	printf("%p\n", ptr);
	printf("%p\n", &a);
	printf("%p\n", &ptr);
	printf("%d\n", a);
	printf("%d\n", *ptr);
	a=34;
	printf("%d\n", a);
	//int b=3;	
	//ptr = &b; // pointer can't be modify.
	//printf("%p\n", ptr);
*/




/*
//3. constant pointer and constant integer

	int a = 33, b=2;
	const int *const ptr= &a;
	printf("%p\n", ptr);
	printf("%p\n", &a);
	printf("%p\n", &ptr);
	printf("%d\n", a);
	printf("%d\n", *ptr);
	a=34;
	//ptr = &b;   // can't able to change address and value.
	// *ptr = 35;

*/



/*
   //4. little endian and big endian 

	int a= 0x763;
	char *k = (char *)&a;
	if( *k == 0x63)
	{
		printf("it is little endian\n");
	}
	else
	{
		printf("it is big endian\n");
	}
*/



/*	
	// 5. null pointer
	
	int a;
	int *ptr = NULL;
	printf("%p\n", ptr);
	//printf("%d\n", *ptr);  //segmentation fault 

*/





/*
	//6. void pointer
		//pointer that can point to address of nay datatype
	int a= 99, b=3;
	char ch = 'a';
	void *ptr;
	ptr = &a;
	printf("address of a is %p\n", (int *)ptr);
	printf("value of a is %d\n", *((int *)ptr) );
	ptr = &ch;
	printf("address of ch is %p\n", (char *)ptr);
	printf("value of ch is %c\n", *((char *)ptr) );
	*(char *)ptr = 'c';
	printf("value of ch is %c\n", *((char *)ptr) );
	printf("address of ch is %p\n", (char *)ptr);

	*(int *)ptr = 33;
	printf("value of a is %d\n", *(int *)ptr);
	printf("address of a is %p\n", (int *)ptr);
*/


/*
	//7. dangling pointer
	
	//int fun(int *);
	
	int* fun(int *ptr)
	{
	printf("address of ptr is %p\n", &ptr);

		return ptr;
	}

	int main()
	{
		int a;
		int *b;
		int *ptr = &a;
		b=fun(&a);
		printf("vaue in b is %p\n", b);
	}		
   */



	//8. wild pointer
	
	int a=3;
	int *ptr;
	printf("address that ptr pointing to %p\n", ptr);

}


	
