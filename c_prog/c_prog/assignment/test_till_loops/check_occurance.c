#include <stdio.h>

void main()
{
	unsigned int i, n, count =0, seq;
	printf("enter any number\n");
	scanf("%u", &n);
	unsigned int mask = 0xF;
	for(i=0; i<=28; i++)
	{
		
		seq = (n>> i) & mask;
		if(seq == 0xC)
		{
			count++;
		}
	}
	printf("count is %d", count);
}
