//profit or loss
#include <stdio.h>
void main()
{
	float sp, cp;
	printf("enter the selling and cost price\n");
	scanf("%f%f", &sp,&cp);
	float profit = sp-cp;
	float loss = cp-sp;
	if(sp>cp)
	{
		printf("profit is %.2f\n", profit);

	}
	else{
         	printf("loss is %.2f\n", loss);

	}
}
