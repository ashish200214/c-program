//Structure with Function//
#include<stdio.h>
#include<string.h>
struct student
{
 char name[100];
 int roll;
 float mark;
};
void printinfo(struct student s1);
int main()
{
 struct student s1;
 strcpy(s1.name,"Ashish");
 s1.roll=12;
 s1.mark=75.7;
 printinfo(s1); 
}
void printinfo(struct student s1)
{
 printf("Name of student is %s\nRoll number is %d\nMarks is %f",s1.name,s1.roll,s1.mark);
}
