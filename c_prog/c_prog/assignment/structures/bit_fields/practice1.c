/*
Bitfields in C are a way to use individual bits or
groups of bits inside a structure instead of using entire bytes 
(8 bits) for small values.
They are mainly used when memory efficiency is important.

Definition:

A bitfield allows you to specify how many bits each member of a structure should occupy.
    
           or 
giving specify bits to the each member of the structure is called bit fields.
*/

#include <stdio.h>

struct student
{
	unsigned int age : 12;
	unsigned char gender  : 8;
	unsigned int marks   : 12;
	unsigned char m_status : 8;
};

	
void main()
{
	struct student s1;
	
	s1.age = 22;
	s1.gender = 'a';
	s1.marks = 66;
	s1.m_status = 'n';

	    printf("age = %u, gender = %c, marks = %u\n, m_status = %c", s1.age, s1.gender, s1.marks, s1.m_status);
printf("\n");

printf("%ld\n",sizeof(s1));
}
	
