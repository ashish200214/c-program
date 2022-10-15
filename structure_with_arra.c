#include<stdio.h>
void ascen(int a[]) 
{  
int i, j,temp;     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Ascending Order\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",a[i]);    
    }  
}

void desc(int a[]) //array a[] points to arr.   
{  
int i, j,temp;     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Descending Order\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",a[i]);    
    }  
}

int main()
{
    int a[10],i;
    printf("enter 5 element in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    ascen(a);
    desc(a);
    return 0;
}
