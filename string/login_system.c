// we have a stored password
// and have to check the new entered password

#include<stdio.h>
#include<string.h>
int main() {
    const char stored_pass[] = "pass0214";
    char new_pass[15];

    printf("Enter your password : ");
    scanf("%s", new_pass);
    //fgets(new_pass, sizeof(new_pass), stdin);


    if(strcmp(new_pass, stored_pass) == 0) {
        puts("Access granted.");
    }else{
        puts("Access denied.");
    }
}


// here fgets will thrown an error as its automatically add \n to the string , but we make a const password . So we will use scanf() here.