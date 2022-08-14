
//vowel vs character
#include<stdio.h>

int main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);
    switch(ch)
    {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
           printf("entered character is vowel");
       break;
    default:
       printf("entered character is consonant");
    
    }
    
    return 0;
}
