#include<stdio.h>
#include<string.h>
struct address{
 int house_no;
 int block;
 char city[100];
 char state[100];
 
};
void printadd(struct address add)
{
 printf("%d, %d, %s,%s",add.house_no,add.block,add.city,add.state);
}
int main()
{
 struct address add[5];
 printf("enter address of first person\n");
 scanf("%d",&add[0].house_no);
 scanf("%d",&add[0].block);
 scanf("%s",add[0].city);
 scanf("%s",add[0].state);

 
 printf("enter address of 2 person\n");
 scanf("%d",&add[1].house_no);
 scanf("%d",&add[1].block);
 scanf("%s",add[1].city);
 scanf("%s",add[1].state);


 printf("enter address of 3 person\n");
 scanf("%d",&add[2].house_no);
 scanf("%d",&add[2].block);
 scanf("%s",add[2].city);
 scanf("%s",add[2].state);

 printf("enter address of 4 person\n");
 scanf("%d",&add[3].house_no);
 scanf("%d",&add[3].block);
 scanf("%s",add[3].city);
 scanf("%s",add[3].state);

 
 printf("enter address of 5 person\n");
 scanf("%d",&add[4].house_no);
 scanf("%d",&add[4].block);
 scanf("%s",add[4].city);
 scanf("%s",add[4].state); 
printadd(add[0]);
printadd(add[0]);
printadd(add[0]);
printadd(add[0]);
printadd(add[0]);

 
}
