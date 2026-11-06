#include <stdio.h>


/*
union student 
{
	char name;
	int roll_no;
	float marks;
};



void main()
{
	
	union student s1; // = {'A', 23, 69.9};
	//s1.name= 'A'; s1.roll_no=23; s1.marks= 6.99;
	//s1[] = {'A', 23, 69};
	printf("enter the name, roll_no and marks\n");
	scanf("%c %d %f",&s1.name, &s1.roll_no, &s1.marks);
	printf("%c\n", s1.name);
	printf("%d\n", s1.roll_no);
	printf("%f\n", s1.marks);
	printf("%ld\n", sizeof(s1));
	printf("%p\n", &s1.name);
	printf("%p\n", &s1.roll_no);
	printf("%p\n", &s1.marks);
	printf("%ld\n", sizeof(union student));
	printf("%ld\n", sizeof(s1.name));

	
}

*/

//self referencial 
struct student
{
	int age;
	float weight;
	struct student *k;
};
	


/*

// array structure variable we can array as variable to store multiple bank_details.
struct bank_details
{
	char name[20];
	char address[30];
	long int acc_no;
	float balance;
}m[3];

int main()
{
	int i;
	printf("enter the all details\n");
	for(i=0; i<3; i++)
	{
		printf("customer %d ", i+1);
		scanf("%s %s %ld %f", m[i].name,  m[i].address, &m[i].acc_no, &m[i].balance);
	}
	printf("details are\n");
	for(i=0; i<3; i++)
	{
		printf("%s %s %ld %f", m[i].name, m[i].address, m[i].acc_no, m[i].balance);
		printf("\n");
	}


return 0;
}

*/	
	



/*
//structure inside a structure 

struct a
{
	char a;
	int b;
	float c;

	struct m
	{
		char a;
		int b;
		float c;
	}m1;

}a1, a2, a3;
	
void main()
{
	printf("enter char int and float\n");
	scanf(" %c %d %f", &a1.m1.a, &a1.m1.b, &a1.m1.c);
	scanf(" %c %d %f", &a2.a, &a2.b, &a2.c);
	
	printf("%c %d %f", a1.m1.a, a1.m1.b, a1.m1.c);
	printf("%c %d %f", a2.a, a2.b, a2.c);
}
	

*/





/*

//structure as a member and printing it (here k1, k2 are variables of type struct a)
struct a
{
	char a;
	int b;
	float c;
};

struct b
{
	char a;
	int b;
	float c;
	struct a k1, k2;
	struct m
	{
		char a;
		int b;
		float c;
	}m1;

}b1, b2, b3;
	
void main()
{
	printf("enter char int and float\n");
	scanf(" %c %d %f", &b1.m1.a, &b1.m1.b, &b1.m1.c);
	scanf(" %c %d %f", &b1.k1.a, &b1.k1.b, &b1.k1.c);	
	scanf(" %c %d %f", &b2.a, &b2.b, &b2.c);
	
	printf("%c %d %.2f", b1.m1.a, b1.m1.b, b1.m1.c);
	printf("%c %d %.2f", b1.k1.a, b1.k1.b, b1.k1.c);
	printf("%c %d %.2f", b2.a, b2.b, b2.c);
}
*/
	


/*
//calling function where structure as an argument 

struct a
{
	char a;
	int b;
	float c;
};

void fun(struct a);

void main()
{
	struct a s;
	fun(s);	
}

void fun(struct a s)
{
	scanf("%c %d %f", &s.a, &s.b, &s.c);
	printf("%c %d %f", s.a, s.b, s.c);
}

*/





/*
//passing array  and structure as argument in function.
struct a
{
	char a;
	int b;
	float c;
};

void fun(struct a, int[], int);

void main()
{
	int n;
	printf("enter the size of the array\n");
	scanf("%d", &n);
	int arr[n];
	struct a s;
	fun(s, arr, n);
		
}

void fun(struct a s, int arr[20], int n)
{
	int i;
	printf("enter the array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the structure elements\n");
	scanf(" %c %d %f", &s.a, &s.b, &s.c);
	printf("%c %d %f", s.a, s.b, s.c);

	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

*/











