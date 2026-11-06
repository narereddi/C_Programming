//palindrome or not

int palindrome(int num)
{
	int digit, reversed_num=0, original_num, flag =0;
	original_num = num;
	while(num != 0)
	{
		digit = num %10;
		reversed_num = reversed_num*10 + digit;
		num = num/10;
	}
	if(original_num == reversed_num)
	{
		flag =1;
	}
	return flag;
	
}
