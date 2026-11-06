#include <stdio.h>
#include <string.h>

void main()
{

/*

	{
	//1. declare and initialize an string
	char ch[] = "sai srinivas";
	printf("%s\n", ch);
	
	printf("%p\n", ch);
	printf("%p\n", ch +1);
	printf("%c\n", ch[0]);
	printf("%p\n", ch+2);
	ch[1] = 'e';
	printf("%s", ch);
	//You can modify the contents: ex: ch[1] = 'e';
	printf("\n");
	}
*/
	
/*	
	{
	//2. declare and initialize strings using pointers
	
	char *str = "sai";
	printf("address of string(base) %p\n", str);
	printf("%s\n", str);
	//This is stored in read-only memory, so you can't modify the contents
	//str[2] = 's';
	//printf("%s", str);
	printf("\n");
	}
*/
	
	{
	//3. accessing string and string elements using pointers
	
	
	char str[20];
	printf("accessing strings using pointers\n");
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	int i;
	char *ptr = str;
	printf("using \s format specifier giving(str)  =  %s\n", str);
	printf("using \s format specifier but giving (ptr) =  %c\n", *(ptr+1) );

	printf("\nusing \c format specifier = ");
	for(i=0; str[i]!='\0'; i++)
	{
		printf("%c", *(ptr+i) );
	}
	
	printf("using ptr = ");
	while( *ptr !='\0')
	{
		printf("%c ", *ptr);
		ptr++;
	}
	printf("\n");
	}


	


/*
	{
	//4. — Copying One String to Another Using Pointers (Without Library Function)	
	char str1[20], str2[20];
	printf("enter the string1\n");
	fgets(str1, sizeof(str1), stdin);
	
	char *ptr1, *ptr2;
	ptr1 = str1;
	ptr2 = str2;
	while( *ptr1 != '\0')
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}
	*ptr2 = '\0';
	
	ptr2 = str2;
	printf("copied string is =  %s  ", str2);
	printf("\ncharacter by character = ");
	while( *ptr2 !='\0')
	{
		printf("%c ", *ptr2);
		ptr2++;
	} 	
	printf("\n");

	}
*/


/*	
	//5. length of the string using pointers.
	
	char str[20];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);

	// Simple way to remove newline if present
	if(str[strlen(str) - 1] == '\n')
	str[strlen(str) - 1] = '\0';

	char *ptr = str;
	int count=0;
	while( *ptr !='\0')
	{
		count++;
		ptr++;
	}
	printf("length of the string is %d\n", count);

*/

/*
	//6. Pointers to Strings (Array of String Pointers).
	
	char *str[] = {"sai", "srinivas", "nayak"};
	printf("strings in str are\n");
	int i;
	for(i=0; i<3; i++)
	{
		printf("%s ", str[i]);
	}	
	printf("\n");
*/
}

