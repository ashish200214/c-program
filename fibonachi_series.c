#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3;
    printf("enter the number\n");
    scanf("%d",&n);
    n3=n1+n2;
    printf("%d\n%d",n1,n2);
    for(int i=3;i<=n;i++)
    {
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return 0;
}
