#include <stdio.h>

struct employee
{
	char name[20];
	int age;
	char gender[10];
	float salary;
};


void main()
{
	struct employee e1, *ptr;
	ptr = &e1;
	
	printf("enter the name, age, gender, salary\n");
	scanf("%s %d %s %f", e1.name, &e1.age, e1.gender, &e1.salary);

	printf("details are\n");
	printf("%s %d %s %.2f", ptr->name,ptr->age, ptr->gender, ptr->salary);
	printf("\n");
}
