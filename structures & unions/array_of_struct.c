#include<stdio.h>

struct Students {
    int roll;
    char name[15];
    float marks;
};

int main() {
    struct Students s[5] = {
        {1, "Shibam", 93.58},
        {2, "Shovan", 86.59},
        {3, "Anik Kumar", 85.36}
    };

    for(int i=0; i<3; i++){
        printf("\nDetails : %d , %s, %.2f",s[i].roll, s[i].name, s[i].marks);
    }
}