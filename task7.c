#include <stdio.h>
int even_odd(int n);
int palindrome(int n);
int prime(int n);
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n > 0){
        even_odd(n);
        palindrome(n);
        prime(n);
    }else{
        printf("Invalid input! Enter a positive integer.");
    }
	return 0;
}
int even_odd(int n){
    if(n % 2 == 0){
        printf("\nThe number is Even.");
    }else{
        printf("\nThe number is Odd.");
    }
}
int palindrome(int n){
    int temp = n;
    int rev = 0;
    int rem;
    while(n > 0)    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(temp == rev)    {
        printf("\nThe number is Palindrome.");
    }else{
        printf("\nThe number is not Palindrome.");
    }
}

int prime(int n){
    int i = 2;
    int flag = 0;
    if(n == 1){
        flag = 1;
    }else{
        while(i < n){
            if(n % i == 0){
                flag = 1;
                break;
            }
            i++;
        }
    }
    if(flag == 0){
        printf("\nThe number is Prime.");
    }else{
        printf("\nThe number is not Prime.");
    }
}
