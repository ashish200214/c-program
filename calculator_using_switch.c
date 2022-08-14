#include<stdio.h>

int main()
{
    int a,b,c;
    char ch;
    
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b,&c);
    fflush(stdin);
    printf("enter 1 for addition\n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiplication \n");
    printf("enter 4 for division\n");
    printf("enter 5 for modulus\n");
    scanf("%c",&ch);
    switch(ch)
    {
      case '1':
        c=a+b;
        break;
      case '2':
      c=a-b;
       break;
      case '3':
      c=a*b;
       break;
      case '4':
      c=a/b;
      case '5':
      c=a%b;
       break;
    default:
       printf("enter correct. hoice");
     
    }
    printf("calculated is %d\n",c);
    
    
    return 0;
}
