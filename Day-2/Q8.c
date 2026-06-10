#include<stdio.h>
 int main() {
    int n,temp,reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);    
    temp = n;
    while(temp != 0) {     
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }   
    if(n == reverse) {
        printf("%d is a palindrome number.", n);
    } else {
        printf("%d is not a palindrome number.", n);
    }   
    return 0;
 }