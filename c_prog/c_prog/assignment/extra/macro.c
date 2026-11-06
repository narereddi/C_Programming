/*
#include <stdio.h>

#define VAL 100
void main()
{
	printf("%d\n", VAL);
}
*/


/*

//2. cube volume 

#include <stdio.h>

#define CUBE(N) (N*N*N)

void main()
{
	int cube_volume, n;
	printf("enter the side of a cube\n");
	scanf("%d", &n);

	cube_volume = CUBE(n);
	
	printf("volume of the cube is %d\n", cube_volume);
}
*/

//3. set a bit, clear a bit and toggle a bit.

#include <stdio.h>

#define SET_A_BIT(num, pos) (num | (1<<pos))
#define CLEAR_A_BIT(num, pos)(num & ~(1<<pos))
#define TOGGLE_A_BIT(num, pos)(num ^ (1<<pos))

void main()
{
	int set, clear, toggle;
	int num, pos;
	printf("enter any hexa decimal numebr\n");
	scanf("%x", &num);
	printf("enter the position to set, clear and toggle a bit\n");
	scanf("%d", &pos);
	set = SET_A_BIT(num, pos);
	clear = CLEAR_A_BIT(num, pos);
	toggle = TOGGLE_A_BIT(num, pos);
	
	printf("after set a bit number is %x\n", set);
	printf("after set a bit number is %x\n", clear);
	printf("after set a bit number is %x\n", toggle);
}

	

	



