/*
1. realloc is used to resize previously allocated memory , without loosing the data

2. if we pass a NULL pointer it behaves like malloc()

3. if the new size is 0 , it behaves like free()
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int* arr = (int*)calloc(2, sizeof(int)); 
    if(arr == NULL){
        printf("Memory allocation failed !");
        return -1;
    }
    
    printf("\nAddress of arr : %p",arr);
    arr[0] = 25;
    arr[1] = 52;

    arr = (int*)realloc(arr, 3 * sizeof(int));
     if(arr == NULL){
        printf("Memory allocation failed !");
        return -1;
    }

    printf("\nNew Address of arr : %p",arr);
    printf("\nOriginal elements are %d %d", arr[0], arr[1]);
    
    free(arr);
    arr = NULL;
    
    return 0;
}