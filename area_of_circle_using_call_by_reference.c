#include<stdio.h>
int areaperi(int r,float *area,float *peri)
{
	*area=3.14*r*r;
	*peri=2*3.14*r;
}

int main()
{
	int radius;
	float area,perimeter;
	printf("enter the radius of circle\n");
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter);
	printf("area = %f and perimeter  of circle = %f  ",area,perimeter);
	return 0;
}
