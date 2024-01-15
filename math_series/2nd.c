
// evaluate the series - 1 + x/1!- x^2/2! + x^3/3! - ...nth

#include<stdio.h>
#include<math.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n * factorial(n-1);
}

int main(){
    int n,x;
    float odd=0,even=0,ans;

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the power of x : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%2 != 0) {
            odd += pow(x,i)/factorial(i);
        }
        else {
            even += pow(x,i)/factorial(i);
        }
    }

    ans = odd-even;
    printf("Answer = %.4f",ans+1);
}