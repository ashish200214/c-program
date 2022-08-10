#include<stdio.h>
typedef struct student
{
  char name[100];
  int roll;
  float mark;
} std;

int main()
{
 std s1={"ashish",54,56.4};
 printf("roll no of student is %d",s1.roll);
  
}
