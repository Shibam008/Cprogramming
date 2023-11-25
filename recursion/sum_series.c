#include<stdio.h>

int sum(int n){
    if (n == 1 || n == 0) return n;
    return n + sum(n-1);
}
int main(){
    int num;
    printf("enter a positive integer number : ");
    scanf("%d", &num);
    int ans = sum(num);
    printf("%d ", ans);
    return 0;
}