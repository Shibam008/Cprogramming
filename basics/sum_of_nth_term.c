#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("How many terms of sum do you want ? Enter term : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        sum = sum+i ;
    }
    printf("Answer is = %d",sum);
    return 0;
}