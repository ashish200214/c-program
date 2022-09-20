//Program to find Average and percentage of 3 subject marks using array

#include<stdio.h>
int main()
{
	 int a[3],i;
	float avg,perc,sum=0.0;
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		sum+=a[i];
	}
	
	avg=sum/3;
	printf("Average of number is %0.2f\n",avg);
	perc=(sum/300)*100;
             
	printf("Percentage is %0.2f",perc);
	return 0;
}
