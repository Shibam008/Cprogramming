#include<stdio.h>
#include<stdlib.h>

int main() {
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    float *arr = (float*)malloc(size*sizeof(float));
    if(arr == NULL) {
        printf("Not have enough space");
        return 1;
    }
    for(int i=0; i<size; i++) {
        printf("enter value at index %d: ",i);
        scanf("%f", &arr[i]);
    }

    printf("Entered values : ");
    for(int i=0; i<size; i++) {
        printf("%.2f ",arr[i]);
    }
    free(arr);
    arr = NULL;
}