#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        printf("roots are are real and different\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        printf("roots are real and equivalent\n");
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
