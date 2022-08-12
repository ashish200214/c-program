#include<stdio.h>
int main()
{
	int no;
	char ch;
	printf("enter the letter in lower case\n");
	scanf("%c",&ch);
	no=ch+32;
	printf("The letter in upper is %c",no);
	return 0;
}
