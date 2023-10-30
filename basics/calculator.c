#include <stdio.h>
int main() {
    float x,y,result;
    int choise;
    printf("Enter two numbers : ");
    scanf("%f %f",&x,&y);
    printf("1-sum\n2-subtraction\n3-miltiplicatio\n4-division\nWhat operation do you want to do ? Enter your choise :  ");
    scanf("%d",&choise);
    
    switch (choise){
        case 1 : result = x+y;
                printf("Sum is = %.2f",result);
                break;
        case 2 : result = x-y;
                printf("Subtraction is = %.2f",result);
                break;
        case 3 : result = x*y;
                printf("Multiplication is = %.2f",result);
                break;
        case 4 : result = x/y;
                printf("Division is = %.2f",result);
                break;
        default : printf("Wrong operation number , try again !") ;     
    }
    return 0;
}