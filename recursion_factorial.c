#include <stdio.h>
int factorial(int n)
{
	
	if(n>=1){
		return n*factorial(n-1);

	
		
	}
	else
	{
	    return 1;
	}
		
}
int main()
{
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	
	printf("factorial is %d",factorial(n));
	
}
