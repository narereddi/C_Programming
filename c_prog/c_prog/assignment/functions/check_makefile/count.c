//count digits 
	
int count(int num)
{
	int digit, count=0;
	while(num != 0)
	{
		count++;
		num = num/10;
	}
	return count;
}
