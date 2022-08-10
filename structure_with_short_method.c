#include<stdio.h>
struct student
{
  char name[100];
  int roll;
  float mark;
};
void info(struct student s1)
{
  printf("name of student is %s\nroll number of student is %d\nmark of student is %f",s1.name,s1.roll,s1.mark);
}
int main()
{
 struct student s1={"ashish",12,67.9};
  info(s1);
}
