#include<stdio.h>

struct Students {
    int roll;
    char name[15];
    float marks;
};

int main() {
    int a = 5;
    int *ptr = &a;


    struct Students student = {1, "Shibam", 93.58};
    struct Students *stu_ptr = &student;

    printf("\nRoll no: %d, Name: %s, marks: %.2f",student.roll, student.name, student.marks);
    // using * operator
    printf("\nRoll no: %d, Name: %s, marks: %.2f",(*stu_ptr).roll, (*stu_ptr).name, (*stu_ptr).marks);
    // using -> (arrow) operator
    printf("\nRoll no: %d, Name: %s, marks: %.2f",stu_ptr -> roll, stu_ptr -> name, stu_ptr -> marks);


}