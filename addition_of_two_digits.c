#include<stdio.h>
int main()
{
int n,a1,a2,sum;
printf("enter the two digits number");
scanf("%d",&n);
a1=n%10;
a2=n/10;
sum=a1+a2;
printf("sum of two digit is %d",sum);

 return 0;
 
}
