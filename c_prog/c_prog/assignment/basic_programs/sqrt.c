//square root of a number
#include <stdio.h>
#include <math.h>
void main()
{
	int num;
	float square_root;
	printf("enter the number\n");
	scanf("%d", &num);
	square_root=sqrt(num);
	printf("square root of a number %d is %.4f\n", num, square_root);
}
