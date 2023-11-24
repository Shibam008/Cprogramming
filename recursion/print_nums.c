#include<stdio.h>
void decreasing(int n){
    if (n==0) return;
    printf("%d ",n); 
    return decreasing(n-1);
}

void increasing(int n){  //***very important
    if (n==0) return;
    increasing(n-1);
    printf("%d ",n); 

}

int main(){
    int num;
    printf("enter a positive integer number : ");
    scanf("%d", &num);
    decreasing(num);
    printf("\n");
    increasing(num);
    return 0;
}