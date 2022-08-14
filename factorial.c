// Factorial of Number
#include <stdio.h>
int main()
{
	int n,factorial=1;
	printf("enter value of n");
	scanf("%d",&n);
	if(n!=0)
	{
		for(int i=1;i<=n;i++)
		{
			factorial=factorial*i;
			
		}
		printf("The factorial is %d",factorial);
	}
	return 0;
}
