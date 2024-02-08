#include <stdio.h>
#include <math.h>
int fibo(int num){
    if(num == 0 || num == 1) return 1;
    return fibo(num-1) + fibo(num-2);
}
int main() {
    int n, first=0;
    printf("Enter how many terms of fibonacci number do you want : ");
    scanf("%d",&n);
    printf("%d ",first);
    for(int i=0; i<n-1; i++){
        printf("%d ",fibo(i));
    }
}