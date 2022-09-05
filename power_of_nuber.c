//Program to find power
#include<stdio.h>
int main()
{
	int base_no,exponent,i;
	long long int power=1;
	printf("enter base of number\n");
	scanf("%d",&base_no);
	printf("enter value of exponent");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++)
	{
		power=power*base_no;
	}
	printf("The Answer is %lld",power);
	return 0;
}
