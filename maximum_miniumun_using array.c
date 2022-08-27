#include<stdio.h>
int main() {
	int i,a[100],size,max,min;
	printf("enter size of array\n");
	scanf("%d",&size);
	printf("enter value of elements in array\n");
	for(i=0; i<size; i++) {
		scanf("%d",&a[i]);
	}

	max=a[0];
	for(i=0; i<size; i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
	printf("maxiumun number is %d\n",max);

	min=a[0];
	for(i=0; i<size; i++) {
		if(a[i]<min) {
			min=a[i];
		}
	}
	printf("minimum value is %d",min);
	return 0;
}
