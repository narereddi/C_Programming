#include <stdio.h>

/*
void main()
{
	struct 
	{
		int age;
		float weight;
	}student;
	student.age = 22;
	student.weight= 61.5;
	printf("%d\n", student.age);
	printf("%f\n", student.weight);		

}
*/


// normal structure printing addresses, assigning values to the members of structure and 
//printing them using '.'  .
 
/*
struct student 
{
	char name;
	int roll_no;
	float marks;
};

	
void main()
{
	struct student s1;
	s1.name= 'A'; s1.roll_no=23; s1.marks= 6.99;
	printf("%c\n", s1.name);
	printf("%d\n", s1.roll_no);
	printf("%f\n", s1.marks);
	printf("%ld\n", sizeof(s1));
	//printf("%p\n", &s1.roll_no);
	printf("%p\n", &s1.name);
	printf("%p\n", &s1.roll_no);
	printf("%p\n", &s1.marks);
	
}

*/



//calling from user and using struct student s1 ;//= {'A', 23, 69}; to assign values. 
//finding size of structure members


/*
struct student 
{
	char name;
	int roll_no;
	float marks;
};

	
void main()
{
	struct student s1 ;//= {'A', 23, 69};
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
	printf("%ld\n", sizeof(struct student));
	printf("%ld\n", sizeof(s1.name));
	printf("%ld\n", sizeof(s1.roll_no));
	printf("%ld\n", sizeof(s1.marks));


	
}

*/




//union code


/*
	
void main()
{

union student 
{
	char name;
	int roll_no;
	float marks;
};
	
	union student s1; // = {'A', 23, 69.9};
	//s1.name= 'A'; s1.roll_no=23; s1.marks= 6.99;
	//s1[] = {'A', 23, 69};
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
	
	
