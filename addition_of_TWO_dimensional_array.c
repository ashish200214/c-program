#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter 4 element in a array\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter 4 element in b array\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		}
	}
	
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
		
		}
	}
	
	
}
