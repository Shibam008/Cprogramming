#include<stdio.h>
#include<string.h>

int main() {
    const char stored_pass[] = "pass1252";
    char new_pass[20];
    do{
        printf("Enter correct password : ");
        scanf("%s", new_pass);
    }while(strcmp(new_pass, stored_pass) != 0);

    printf("\nAccess Granted.");
}