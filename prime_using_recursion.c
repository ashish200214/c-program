#include<stdio.h>
int rec(int n,int count)
{
	if(n<1)
	{
		return ;
	}
	else if(n%count==0)
	{
		printf("%d\n",count);
		rec(n/count,count);
	}
	else
	{
		rec(n,count+1);
	}
}

int fact(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
	
		{
			printf("%d\n",i);
			n=n/i;
		}
	}

}
int main()
{
	int n,count;
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("Prime factor without using recursion is %d\n");
	fact(n);
	printf("\n");
	printf("Prime factor using recursion is\n");
	rec(n,2);
	
	
	return 0;
}
