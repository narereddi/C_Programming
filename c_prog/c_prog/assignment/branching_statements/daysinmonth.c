//no of days in month
#include <stdio.h>
void main()
{
        int month_number;
        printf("enter the month number\n");
        scanf("%d",&month_number);
        if(month_number==1||month_number==3||month_number==5||month_number==7||month_number==8||month_number==10||month_number==12)
        {
                printf("month has 31days\n");
        }
        else if(month_number==4||month_number==6||month_number==9||month_number==11)
        {
                 printf("month has 30days\n");
        }
         else
        {
                 printf("month may have 28 or 29 days\n");
        }
}
                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                
