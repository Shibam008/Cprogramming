#include<stdio.h>
int fibonacci(int n){
    if(n <= 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    printf("Which term of Fibonacci number do you want ? :- ");
    scanf("%d", &n);
    printf("%d ",fibonacci(n));
   
}