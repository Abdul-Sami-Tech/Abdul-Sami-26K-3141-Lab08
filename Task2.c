#include <stdio.h>
int main(){
	int a=10;
	int b=20;
	int *a1 = &a;
	int *b1 = &b;
	
	printf("Value of a: %d", *a1);
	printf("\nValue of b: %d\n", *b1);
	
	int temp = *a1;
	*a1 = *b1;
	*b1 = temp;
	
	printf("\nValue of (swapped) a: %d", *a1);
	printf("\nValue of (swapped) b: %d", *b1);
	
}