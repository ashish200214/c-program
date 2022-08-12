#include<stdio.h>
int main()
{
	int principle,rate,time,SI;
	printf("enter principle amount\nenter rate of intereset\nenter time duration\n");
	
	scanf("%d%d%d",&principle,&rate,&time);
	SI=(principle*rate*time)/100;
	printf("Simple interest is %d",SI);
	return 0;
}
