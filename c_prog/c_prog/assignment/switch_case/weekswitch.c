// Write a C program to print day of week name using switch case
#include <stdio.h>
void main()
{	
	int num;
	printf("enter the number\n");
	scanf("%d", &num);
	switch(num){
		case 1: 
			printf("monday\n");
			break;
		case 2: 
			printf("tuesday\n");
			break;
		case 3: 
			printf("wednesday\n");
			break;
		case 4: 
			printf("thursday\n");
			break;
		case 5: 
			printf("friday\n");
			break;
		case 6: 
			printf("saturday\n");
			break;
		case 7: 
			printf("sunday");
			break;
		default: 
			printf("invalid input\n");
		}
}

