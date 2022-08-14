
// swap using two variable
#include<stdio.h>

int main()
{
   int a,b;
   printf("enter value of a and b\n");
   scanf("%d%d",&a,&b); //a=10 b=20
   a=a+b;  //a=30
   b=a-b;  //b=10
   a=a-b;  //a=20
   printf("a=%d\nb=%d",a,b);
	
    
    return 0;
}
