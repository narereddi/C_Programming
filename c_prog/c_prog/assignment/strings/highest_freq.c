//Write a C program to find highest frequency character in a string.

#include <stdio.h>

void main()
{
	int i,j, max, k;
	int count[100] ={0};
	char str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	for(i=0; str[i] !='\0'; i++)
	{
		for(j=0; str[j] !='\0'; j++)
		{
			if(str[i] == str[j])
			{
				count[i]++;
			}
		}
		//printf("count of each cahracter (%c) is %d\n", str[i], count1[i]);
	
		if(count[i]> count[0])
		{	
			max= count[i];
		}
	}

	printf("highest frequency charater is %d", max);

	
	//printf("count of %c is %d\n", str[i], count1);
	
}
			
