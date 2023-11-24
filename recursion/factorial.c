#include<stdio.h>
int factorial(int n){
    if (n == 1 || n == 0) return 1;
    return n * factorial(n-1);
}
int main(){
    int num;
    printf("enter a positive integer number : ");
    scanf("%d", &num);
    int ans = factorial(num);
    printf("%d ", ans);
    return 0;
}