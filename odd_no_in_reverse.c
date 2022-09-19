//Printing Even Number in reverse order
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number\n");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
	     if(i%2!=0)
	     {
	     	printf("%d\n",i);
		 }
		 i--;
	}
}
