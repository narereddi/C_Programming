#include <stdio.h>

void main()
{	
	int i, s1, s2;
/*
	int a[5]={1, 2, 3, 4, 5};
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
*/
	
/*
	
	int a[5]={1, 2};
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	s1 = sizeof(a);
	printf("%d ", s1);

*/

/*	int a[5];
	printf("enter 5 array elements\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("array elements are\n");
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}

*/


	int a[3]= {1, 2, 3};
	char s[] = "hi";
	s1 = sizeof(s);
	s2 = sizeof(a);
	printf("%d\n", s1);
	printf("%d\n", s2);



/*
	int a[4] = {1, 2, 3, 4, 5};
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
*/

/*
	print array addresses
	int a[4] = {7, 2, 6, 4};
	for(i=0; i<5; i++)
	{
		printf("%p\n", &a[i]);
	}

*/

/*	
	int a[4] = {7, 2, 6, 4};
	printf("%p\n", a);
	printf("elements are\n");
	for(i=0; i<4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("addresses are \n");
	for(i=0; i<4; i++)
	{
		printf("%p\n", &a[i]);
	}

	printf("\n");
*/	

/*
	char a[4] = {1, 2, 3, 4};
	printf("%p %p %p %p %p", &a[0], a, a+0, a +1, a + 2);
*/



/*	
	char a[4] = {'a', 'b', 'c', 'd'};
	for(i=0; i<4; i++)
	{
		printf("%c\n", a[i]);
	}
	
	printf("\n");
	char b[4] = {'a', 'b', 'c'};
	for(i=0; i<4; i++)
	{
		printf("%c\n", b[i]);
	}
	
	printf("\n");
	char c[4] = "abcde";
	for(i=0; i<4; i++)
	{
		printf("%c\n", c[i]);
	}
 */

}
