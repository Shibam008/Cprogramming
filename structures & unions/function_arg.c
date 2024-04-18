#include<stdio.h>

struct Students {
    int roll;
    char name[15];
    float marks;
};

void print_details(struct Students stu){
    stu.roll = 55;
    printf("\nRoll no: %d, Name: %s, marks: %.2f", stu.roll, stu.name, stu.marks);
}

void print_details_from_pointer(struct Students *ptr){
     ptr -> roll = 21;
     printf("\nRoll no: %d, Name: %s, marks: %.2f", ptr -> roll, ptr -> name, ptr -> marks);
}

int main() {
    
    struct Students student = {1, "Shibam", 93.58};
    struct Students *stu_ptr = &student;

    print_details(student);
    printf("\nRoll no: %d, Name: %s, marks: %.2f", student.roll, student.name, student.marks);

    print_details_from_pointer(stu_ptr);
    printf("\nRoll no: %d, Name: %s, marks: %.2f", student.roll, student.name, student.marks);


}