#include <stdio.h>
/*
struct student
{
	char name[20];
	int age;
	float marks;
};
	
struct student s1, s2;

*/



/*	
	//1. pointer to a structure.
	
	struct student
	{
		int age;
		char name[20];
		float marks;
	};
	
	void main()
	{

		struct student s1, *stu;
		stu = &s1;
		scanf("%d %s %f", &(*stu).age, (*stu).name, &(*stu).marks);
		printf("%d %s %.2f", stu -> age, stu ->name,  stu ->marks);
		printf("\n");
	}
*/


/*
	//2. pointer to Structure Array	
	
	struct student
	{
		int age;
		char name[20];
		float marks;
	};
	
	void main()
	{	
		int i;
		struct student s[3], *ptr;
		ptr = s;
		printf("enter the name, age and marks\n");
		for(i=0; i<3; i++)
		{
			scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->age, &(ptr+i)->marks);
		}
	
		for(i=0; i<3; i++)
		{
			printf("%s %d %.2f", (ptr+i)->name, (ptr+i)->age, (ptr+i)->marks);
			printf("\n");
		}
		printf("\n");

	}
*/



/*
	//3. Passing Structure Pointer to Function
	
	struct student
	{
		char name[20];
		int age;
		float marks;
	};
	
	void fun (struct student *);
	void fun (struct student *stu)
	{
		printf("enter the name, age and marks\n");
		scanf("%s %d %f", stu->name, &stu->age, &stu->marks);
		printf("%s %d %.2f", stu->name, stu->age, stu->marks);
	}
	void main()
	{
		struct student s, *stu;
		fun(&s);
	}
*/		
	

	

