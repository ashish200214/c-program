//power using math.h
#include<stdio.h>
#include<math.h>
int main()
{
	int num1;
	printf("enter value of num1");
	scanf("%d",&num1);
	int power=pow(num1,2);
	printf("%d",power);
	return 0;
}
