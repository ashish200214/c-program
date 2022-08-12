#include<stdio.h>
int even(int n)
{
	for(int count=1;count<=n;count++)
	{
		if(count%2==0)
		{
			printf("%d\n",count);
		}
	}
	
}



int main()
{
int n;
printf("enter value of n");
scanf("%d",&n);
even(n);

 return 0;
 
}
