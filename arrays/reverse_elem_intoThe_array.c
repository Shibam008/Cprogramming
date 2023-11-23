//*Prob 21 : Reverse the Array without using extra array
//we will use two pointer approach and then swap using temp var.
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    int left = 0, right = size-1;
    while(left <= right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++, right--;
    }
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

