#include<stdio.h>
int main()
{
	int m1,m2,m3;
	float total,percentage;
	printf("enter value of m1,m2 and m3");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	percentage=(total/300)*100;
	printf("Total = %f\nPercentage = %f",total,percentage);
	
	return 0;
}
