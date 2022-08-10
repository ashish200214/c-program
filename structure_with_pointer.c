#include<stdio.h>
struct student
{
  char name[100];
  int roll;
  float marks;
}
int main()
{
 struct student s1={"ashish",17,90.6};
  struct student=*ptr;
  *ptr=&s1;
  printf("roll number is %d\n",ptr->roll);      //Using Arrow Operator ((*ptr).roll)     --Another method
}
