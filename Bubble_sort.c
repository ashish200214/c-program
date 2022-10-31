//Bubble_sort  #include<stdio.h>
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

void ascen(int a[])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
    printf("Ascending order is :-\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}

void des(int a[])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
    printf("Descending order is :-\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}

void main()
{
    int a[5],ch;
    printf("enter 5 element in array\n");
    scan(a);

    printf("Enter\n1.Ascending oder\t2.Decending order\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        ascen(a);
        break;
        case 2:
        des(a);
        break;
        default:
        printf("enter correct choice");
    }

}
