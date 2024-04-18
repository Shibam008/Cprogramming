
/*
1. Calloc initializes all allocated memory to zero

2. It takes two arguments :-
( number of elements, size of each element)

3. preffered for array allocation when zero initialization is needed 

4. like malloc(), returns a void pointer that should be cast to the appropriate type
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int length;
    printf("Enter the size of array : ");
    scanf("%d", &length);

    int* arr = (int*)calloc(length, sizeof(int)); 

    //check if memory has been successfully allocated
    if(arr == NULL){
        printf("Memory allocation failed !");
        return -1;
    }
    //taking input
    for(int i=0; i<length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    // Doing sum
    long sum = 0;
    for(int i=0; i<length; i++){
        sum += arr[i];
    }
    // deallocating memory
    free(arr);
    arr = NULL;

    printf("Sum of elements : %ld",sum);
    return 0;
}