#include <stdio.h>

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
           return 1;
        }
    } 
}

int main() {
    int arr[]={1, 2, 3, 4, 5, 8};
    int size = sizeof(arr)/sizeof(int);
    int target;
    printf("Enter target value : ");
    scanf("%d",&target);
    
    int ans = linearSearch(arr, size, target);
    
    if (ans == 1){
        printf("Target value found");
    }
    else printf("Target value not found");
    
    
    return 0;
}