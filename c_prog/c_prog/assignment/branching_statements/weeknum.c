#include <stdio.h>
void main()
{
	int week_number;
	printf("enter the number of week\n");
	scanf("%d",&week_number);
	if(week_number==1)
	{
		printf("it is monday\n");
	}
	else if(week_number==2)                   
	{
		 printf("it is tuesday\n");
	}
	 else if(week_number==3)
        {
                 printf("it is wednesday\n");
        }
	 else if(week_number==4)
        {
                 printf("it is thursday\n");
        }
	 else if(week_number==5)
        {
                 printf("it is friday\n");
        }
	 else if(week_number==6)
        {
                 printf("it is saturday\n");
        }
	 else
        {
                 printf("it is sunday");
        }
}
