#include<stdio.h>
#define pie 3.14
int main()
{
float area,radius,perimeter;
printf("enter value of radius\n");
scanf("%f",&radius);
area=pie*radius*radius;
perimeter=2*pie*radius;
printf("Area of circle is %f\nPerimeter Of Circle is %f",area,perimeter);

 return 0;
 
}
