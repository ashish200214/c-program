#include<stdio.h>
int sum(int n)
{
int remainder,sum=0;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	return sum;
}


int main()
{
	int n;
	printf("enter the 5 integer");
	scanf("%d",&n);
	printf("sum is %d",sum(n));
	return 0;
}
