#include <stdio.h>
void main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c", &ch);
	
	switch(ch)
	{
		 case 'a' : case 'e' : case'i' : case 'o' : case 'u' : case 'A' : case 'E' : case 'I' : case 'O' : case 'U':
			printf("%c is vowel", ch);
			break;
			
		default :
			printf("%c is consonant\n", ch);
	}
}			
