#include<stdio.h>
int main()
{
int n,reverse=0,remainder;
printf("enter value of n");
scanf("%d",&n);
while(n!=0)
{
	remainder=n%10;
	reverse=reverse*10+remainder;
	n/=10;
}
printf("reverse of number is %d",reverse);

 return 0;
 
}
