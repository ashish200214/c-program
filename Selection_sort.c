//selection sorting using function#include<stdio.h>
void scan(int a[])
{
  int i;
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
}

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void selection_sort(int a[])
{
  int i,j,min;
  for(i=0;i<5;i++)
  {
    min=i;
    for(j=i+1;j<5;j++)
    {
      if(a[j]<a[min])
      {
        min=j;
      }
    }
    swap(&a[i],&a[min]);
  }
  printf("sorted elements is :-\n");
  for(i=0;i<5;i++)
  {
    printf("%d\t",a[i]);
  }
  
}

void main()
{
  int a[5];
  printf("enter 5 element in array\n");
  scan(a);
  selection_sort(a);
}
