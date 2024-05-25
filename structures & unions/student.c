#include<stdio.h>

typedef struct {
    char name[25];
    char year[15];
    char grade;
}student;

void increase_grade(student *stu) {
    stu->grade--;
    printf("%s the student of %s year got grade %c\n", stu->name, stu->year, stu->grade);
}

void decrease_grade(student *stu) {
    stu->grade++;
    printf("%s the student of %s year got grade %c\n", stu->name, stu->year, stu->grade);
}

void print(student *stu) {
    printf("%s the student of %s year got grade %c\n", stu->name, stu->year, stu->grade);
}

int main() {
    student stu1 = {.name="Shibam", .year="1st", .grade='A'};
    student stu2 = {.name="Shovan", .year="2nd", .grade='B'};
    student stu3 = {.name="Anik", .year="3rd", .grade='C'};

    printf("Students details : \n");
    print(&stu1);
    print(&stu2);
    print(&stu3);

    printf("\nAfter Changes : \n");
    increase_grade(&stu2);
    decrease_grade(&stu3);


}