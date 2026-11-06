#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//void main()
//{

//method 1
/*
	int a=23;
	int *ptr= &a;
	printf("%p\n", &a);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);
	printf("%d\n", a);

*/



//method 2
/*
	int a;
	printf("enter the any number\n");
	scanf("%d", &a);
	
	int *ptr;
	ptr = &a;
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);
	printf("%d\n", *ptr);
*/



/*
//storing address in long long int

	long long int a;
	int b;
	a=&b;
	printf("%p\n", a);
	printf("%p\n", &a);

*/


/*
//unknown method

    int a = 42;
    uintptr_t addr = (uintptr_t)&a;

    printf("Address stored as integer: %" PRIuPTR "\n", addr);
    printf("Back to pointer: %p\n", (int *)addr);

*/



/*

	int a[3][3]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ptr = a;
	printf("%p\n", &a);
	printf("%p\n", ptr);
	printf("%p\n", ptr +1);
	printf("%d\n", *(ptr +2));
	printf("%p\n", ptr+4);
	printf("%d\n", *(ptr+3) + 2);	

*/
/*
	struct swathi
	{
		char ch;
		int name;
		//char [10];
		double marks;
	}

	void main()
	{
		struct swathi s;
		printf("%p\n", &s.ch);
		printf("%ld\n", sizeof(s.ch));
		printf("%ld\n", sizeof(s.name));
		printf("%ld\n", sizeof(s.marks));
		printf("%ld\n", sizeof(s));
	
	}
		
*/	
	
//}


	struct swathi
	{
		char ch;
		int name;
		//char [10];
		double marks;
	};

	void main()
	{
		struct swathi s;
		printf("%p\n", &s.ch);
		//printf("%ld\n", sizeof(ch));
		printf("%ld\n", sizeof(s.ch));
		printf("%ld\n", sizeof(s.name));
		printf("%ld\n", sizeof(s.marks));
		printf("%ld\n", sizeof(s));
		printf("%ld\n", sizeof(struct swathi));

	
	}

