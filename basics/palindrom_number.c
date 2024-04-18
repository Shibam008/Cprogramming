#include<stdio.h>
int main (){
    int num,reversed=0,remainder,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num = num / 10;    // for skipping last digit.
    }

    if(original == reversed ){
        printf("%d is a palindrom number",original);
    }
    else{
        printf("%d is not a palindrom number",original);
    }
}