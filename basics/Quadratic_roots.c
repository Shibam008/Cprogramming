/*/  
           ALGORITHM
step 1 : start 
step 2 : take inputs a,b,c,d,x1,x2   {here d = square root of discriminant}
step 3 : x1 = (-b+d)/(2*a)
step 4 : x2 = (-b-d)/(2*a)
*/

#include<stdio.h>
#include<math.h>
int main (){
    double a,b,c,d,x1,x2;
    printf("Enter a b c :");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("Roots of this equation are %lf & %lf ",x1,x2);
    return 0;
}

