#include <stdio.h>
#include <math.h>
int main() {
    int num, original, rem, n=0, ans = 0;
    printf("Enter a positive integer number : ");
    scanf("%d",&num);
    original = num;
    int digit = num;
    // counting digits.
    while(digit != 0){
       digit = digit/10;
       n++;
    }
    // printf("digits of a number = %d", n);
    while(num != 0){
        rem = num % 10;
        ans = ans + pow(rem, n);
        num = num / 10;
    }
    
    if(original == ans){
        printf("This is an Armstrong number");
    }
    else{
        printf("This is not an Armstrong number");
    }
}