
// swap using three variable
#include<stdio.h>

int main()
{
   int a,b,temp;
   printf("enter value of a and b\n");
   scanf("%d%d",&a,&b); //a=10 b=20
   temp=a;  //temp=10
   a=b;    //a=20
   b=temp;  //b=10
   printf("a=%d\nb=%d",a,b);
   
	
    
    return 0;
}
