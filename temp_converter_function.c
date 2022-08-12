
//temperature converter 
#include<stdio.h>
float fah(float temp)
{
	int cel=(temp-32)*5/9;
	return cel;
}

int main()
{
float temp;
printf("enter the temperature in fah\n");
scanf("%f",&temp);
printf("celcius in temperature is %f",fah(temp));
 return 0;
 
}
