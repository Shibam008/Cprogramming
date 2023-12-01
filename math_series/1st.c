
// evaluate - 1 + 1/x^2 + 2/x^3+....+n

#include <stdio.h>
#include<math.h>
int main() {
    int n,i,x;
    float sum=0.0; 
    printf("enter value of n (number of iteration) : ");
    scanf("%d", &n);
    printf("enter value of x : ");
    scanf("%d", &x);
    for(i=1; i<=(n-1); i++){
        sum = sum + (i/pow(x, i+1));
        }
        printf("ans of the series is = %.2f",sum+1); 
//as we need to add 1 for one time , we add that 1 outside the loop with ans and for that reason we iterate the loop n-1 times.
    return 0;
}