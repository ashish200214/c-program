#include<stdio.h>
int main() {
	int n,reverse=0,remainder,original;
	printf("enter value of n\n");
	scanf("%d",&n);
	original=n;
	while(n!=0) {
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	if(original==reverse) {
		printf("palindrome number\n");
	} else {
		printf("not palindrome");
	}
	return 0;
}
