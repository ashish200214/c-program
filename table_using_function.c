#include<stdio.h>
int table(int n)
{
    int count;
    for(count=1;count<=10;count++)
    {
    	printf("%d\n",n*count);
	}
	return count;
}



int main()
{
int n;
printf("enter value of n");
scanf("%d",&n);
table(n);

 return 0;
 
}
