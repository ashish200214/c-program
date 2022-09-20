#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("enter the size of array\n");
	scanf("%d",&size);
	printf("enter the %d element in array\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered element in array is :-\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nReverse of number is :-\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
