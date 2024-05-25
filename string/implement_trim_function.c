#include<stdio.h>
#include<string.h>
int main() {
    char input[50];
    char trimmed[50];
    printf("Enter a string : ");
    fgets(input, sizeof(input), stdin);

    int start = 0;
    int end = strlen(input) - 1;

    while(input[start] == ' ') start++;
    while(input[end] == ' ' || input[end] == '\n') end--;

    int i=0;
    while(i<(end-start+1)) {
        if(input[i+start] == ' '){
            trimmed[i] = '-';
        }else {
            trimmed[i] = input[i+start];
        }
        i++;
    }
    trimmed[i] = '\0';

    printf("Final trimmed string is : %s",trimmed);
}

// as fgets insert '\n' automatically we have to handle that case.  (line 13)

// after trimming we have to set out null char at the end. (line 24)