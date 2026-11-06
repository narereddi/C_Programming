#include <stdio.h>
void main()
{
	 float cm;
	 printf("enter the centimeters\n");
         scanf("%f", &cm);
         printf("centimeters into meters %.2f\n", cm / 100); 
         printf("centimeters into kilometers %.5f\n", cm / 100000);
}
