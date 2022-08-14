
// pattern
//  
//* * * *
// * * *
//  * *
//   *

//   
//    
//     
//     
#include <stdio.h>
int main()
{
   for(int i=1;i<=5;i++)   //for row
   {
   	for(int j=1;j<i;j++)   //for space 
   	{
   		printf(" ");
	}
	for (int k=i;k<=5;k++) //for column   
	{
		printf("* ");
	}
	printf("\n");
	   
   }
   
   return 0;

}
