// Day using Switch statment
#include<stdio.h>

int main()
{
    int day;
    printf("enter day number");
    scanf("%d",&day);
    switch(day)
    {
     case 1:
           printf("Day is monday");
     break;
     case 2:
           printf("Day is tuesday");
     break;
     case 3:
           printf("Day is Wednesday");
     break;
     case 4:
           printf("Day is thursday"); 
     break;
     case 5:
           printf("Day is Friday");   
     break;  
     case 6:
           printf("Day is Saturday");
     break;
     case 7:
           printf("Day is sunday");
     default: 
              printf("enter correct choices" );
            
    }
    return 0;
}
