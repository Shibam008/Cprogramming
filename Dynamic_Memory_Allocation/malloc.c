#include<stdio.h>
#include<stdlib.h>

int main(){
    int length;
    printf("Enter the size of array : ");
    scanf("%d", &length);

     // dynamic memory allocation (passing the size in bytes)

    int* arr = (int*)malloc(sizeof(int) * length); 

    // malloc returns a void pointer so first we have to typecast it whattever we want , like (int*), char(*) etc

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
    //deallocating memory
    free(arr);
    arr = NULL;

    printf("Sum of elements : %ld",sum);
    return 0;
}