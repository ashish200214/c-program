#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a = %d\tb = %d",a,b);
	return 0;
}
