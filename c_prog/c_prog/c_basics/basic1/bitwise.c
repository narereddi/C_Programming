#include <stdio.h>
int main()
{
	/*
	int a=5;
	printf("%b\n", a<<3);
	printf("%d\n", a<<3);
*/

/*
	int b=8;
	printf("%b\n", b>>3);
        printf("%b\n", b>>3);
*/
/*
	//masking a upper nibble
	int c=0x54;
	//printf("%x", c&0xF);

	//masking a lower nibble 
	printf("%x", c&0xF0);
*/
/*
	//Extracting a last 6 bits;
	int k;
	int d=0x1234;
        k=d&0x3F;
	printf("%x", k);
*/
	//Extracting a MSB
/*	
	int k;
	int e=0xABCD;
       k=e&0x8000>>15;
printf("%x", k) ;      
*/

	//set a BIT
   /*    int k;	
	int num =0x35;
	int position =4;
	k= num|(0x1<<position);
	printf("%x\n", k);
	printf("%b\n", k);
	 printf("%d\n", k);
*/

	//set a BIT 2
/*	
	int k;
	int num=0xABC;
	int position= 1;
	k=num|(0x1<<position);
	printf("%x\n", k);
	printf("%b\n", k);
	printf("%d\n", k);
*/

	//set a BIT 3;
/*	
	int k;
        int num=0xA59;
        int position= 5;
        k=num|(0x1<<position);
        printf("%x\n", k);
        printf("%b\n", k);
        printf("%d\n", k);
*/

/*
 
	//Clear a BIT
	int k;
	int num=0xABCD;
	int position =3;
	k=num& ~(0x1<<position);
	printf("%x\n", k);
	 printf("%b\n", k);
        printf("%d\n", k);

*/

/*	//clear a BIT
          int k;
        int num=0xA572;
        int position =13;
        k=num& ~(0x1<<position);
        printf("%x\n", k);
	 printf("%b\n", k);
        printf("%d\n", k);

*/

/*	//Toggle a BIT
	
	int k;
	int num=0x758;
	int position =6;
	k=num ^ (0x1<<6);
	printf("%x\n", k);
	 printf("%b\n", k);
        printf("%d\n", k);
*/

	//toogle a BIT
	
/*
	int k,num=0xAEFC;
	int position =4;
	k=num ^ (0x1<<4);
	printf("%x\n", k);
         printf("%b\n", k);
        printf("%d\n", k);
*/

/*	//increment and decrement

        int a=11;
      printf("%d %d %d %d %d", ++a,a++, a,++a,a);	
*/


/*	//size of Operator.
	int a=20,k,b,c,d;
       
	k=sizeof(a);
	 b=sizeof(float);
          c=sizeof(double);
          d=sizeof(long double);

	printf("%d\n", k);
	 printf("%d\n", b);
          printf("%d\n", c);
        printf("%d\n", d);
*/

	//set a bit 
/*
	int k, num=0xA689;
	int position =5;
	k= num|(0x3<<5);
	printf("%x\n",k) ;
	printf("%d\n", k);
	printf("%b\n", k);
	*/

	//set a bit 
/*	
	int k, num=0xA6B9;
        int position =5;
        k= num|(0x7<<5);
        printf("%x\n",k) ;
        printf("%d\n", k);
        printf("%b\n", k);
*/

	// swap nibbles last and first

	
       int num=0xABCD;
       int FN=(num&0xF000)>>12;
       int LN= (num&0x000F)<<12;
       int MNs= num&0x0FF0;
       num=LN|FN|MNs;
       printf("%x", num);
  

/*
	int num,k;
	printf("enter the hexa number ");
	scanf("%x", &num);

	int N1=(num&0xF000)>>8, N2=(num&0x0F00)>>8, N3=(num&0x00F0)<<8, N4=(num&0x000F)<<8;
	k=N1|N2|N3|N4;
	printf("%x\n", k);
	printf("%d\n", k);
	printf("%b\n", k);
*/
       
     	


}




