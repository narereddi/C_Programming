//Write a C program to check whether character is an alphabet or not using
//conditional/ternary operator.
#include <stdio.h>
void main()
{
	char ch, alphabet;
	printf("enter any character\n");
	scanf("%c", &ch);
	alphabet = ( (ch>='a' && ch<= 'z') ) || ( (ch>='A') && (ch<='Z') ) ? printf("%c is alphabet\n", ch) : printf("%c is not alphabet\n", ch);
}
