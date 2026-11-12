#include <stdio.h>

int main() {
    int num1, num2, sum=0, product=0;
    int *a = &num1;
    int *b = &num2;

    printf("Enter a Number: ");
    scanf("%d", a);

    printf("Enter another Number: ");
    scanf("%d", b);

    printf("num-1 is: %d\n num-2 is: %d", *a, *b);

	sum= *a + *b;
	product = *a * *b;
	printf("\nSum is %d", sum);
	printf("\nproduct is %d", product);
}