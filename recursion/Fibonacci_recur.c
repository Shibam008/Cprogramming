#include<stdio.h>

int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
   
   int n;
   printf("Enter the value of nth term : ");
   scanf("%d",&n);
   printf("Fibonacci Number at %dth term is %d ",n , fibo(n));


return 0;
}