//Write a C program to input any alphabet and check whether it is vowel or consona//nt.
#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a single alphabet: ");
   	scanf(" %c", &ch);

  	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
		{
        	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
          	  	ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
		{
           	  	printf("Vowel\n");
        	}
		else 
		{
       	     	printf("Consonant\n");
        	}
                } 
	else
	{
       		 printf("not alphabet\n");
   	 }
}

