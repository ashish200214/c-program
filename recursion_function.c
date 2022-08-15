//sum of number using recursion method
#include<stdio.h>

int sum(int n)
{
 if(n!=0)
{
  return n+sum(n-1);
}
else
{
   return n;
}
}

int main()

{
   int n,result;
   printf("enter value of n");
   scanf("%d",&n);
   result=sum(n);
   printf("sum is %d",result);
    return 0;
}
