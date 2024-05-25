#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[30];
    printf("Enter any string : ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; i<strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    printf("Converted into uppercase : %s",str);
    // puts(str);
}