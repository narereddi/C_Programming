#include <stdio.h>

void main()
{
	char a[10]={1,4, 55, 5};
	printf("%ld\n", sizeof(a));
	/*printf("%ld\n", sizeof(&a));
	printf("%ld\n", sizeof(a+1));
	printf("%ld\n", sizeof(&a+1));
	//printf("%ld\n", sizeof(a));
	*/
	
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", &a[0]);
	printf("%p\n", a+1);
	printf("%p\n", &a +1);
	printf("%p\n", a+2);
	

	
}
