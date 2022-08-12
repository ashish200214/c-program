
//area of triangle 
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

int mod(int a,int b)
{
	return a%b;
}

int main()
{
int num1,num2;
printf("enter value of num1 and num2\n");
scanf("%d%d",&num1,&num2);
printf("addition is %d\n",add(num1,num2));
printf("substraction is %d\n",sub(num1,num2));
printf("multiplication is %d\n",mul(num1,num2));
printf("division is %d\n",div(num1,num2));
printf("modulus is %d",mod(num1,num2));
 return 0;
 
}
