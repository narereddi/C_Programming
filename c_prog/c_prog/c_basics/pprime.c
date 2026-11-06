#include <stdio.h>
int main()
{
	int n,isprime=1;
	printf("enter the number ");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{  isprime=1;
	       	for(int j=2;j<i;j++)
		{
                   if(i%j==0)
                {
		isprime=0;
                }
	
               }
		if(isprime)
		{
			printf("%d\n", i);
		}
      }
}	
              
