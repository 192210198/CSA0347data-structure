#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	
	}
	printf("%d is reversed number:",rev);
	return 0;
}
