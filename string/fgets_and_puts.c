#include<stdio.h>
#include<string.h>

int main() {
    char name[25];
    printf("Enter your full name : ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is : ");
    puts(name);
}