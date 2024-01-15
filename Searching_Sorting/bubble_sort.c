#include<stdio.h>
#include<stdbool.h>
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort_optimized(int arr[], int n){
    bool swapped;

    for(int i=0; i<n-1; i++){  //  number of pass 
    swapped = false;
    printf("Working with %d pass\n",i+1);
        for(int j=0; j<n-1-i; j++){  // number of comparison
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
}

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){  //  number of pass 
    printf("Working with %d pass\n",i+1);
        for(int j=0; j<n-1-i; j++){  // number of comparison
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(int);
    printarray(arr,size);
    bubblesort_optimized(arr,size);
    //bubblesort(arr,size);
    printarray(arr,size);
    return 0;
}