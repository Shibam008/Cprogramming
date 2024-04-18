#include<stdio.h>

struct Students {
    int roll;
    char name[15];
    float marks;
};

int main() {
    // Direct Initialization
    struct Students s1 = {1, "Shibam", 83.6};

    // Designated Initialization
    struct Students s2 = {.name = "Ram", .marks = 85.6, .roll = 5};

    // Zero Initialization
    struct Students s3 = {0};

    // Copy Initialization
    struct Students s4 = s1;
    s4.roll = 52;



    printf("\nRoll no : %d, Name : %s, Marks : %.2f",s1.roll, s1.name, s1.marks);
    printf("\nRoll no : %d, Name : %s, Marks : %.2f",s2.roll, s2.name, s2.marks);
    printf("\nRoll no : %d, Name : %s, Marks : %.2f",s3.roll, s3.name, s3.marks);
    printf("\nRoll no : %d, Name : %s, Marks : %.2f",s4.roll, s4.name, s4.marks); 
}