#include <stdio.h>

struct student
{
	char name[20];
	int age;
	float marks;
};
	
	
void main()
{
	int i;
	struct student stu[2];
	printf("enter the students details\n");
	for(i=0; i<2; i++)
	{
		scanf("%s %d %f", stu[i].name, &stu[i].age, &stu[i].marks);
	}

	printf("students details are\n");

	for(i=0; i<2; i++)
	{
		printf("%s %d %.2f", stu[i].name, stu[i].age, stu[i].marks);
		printf("\n");
	}

}
