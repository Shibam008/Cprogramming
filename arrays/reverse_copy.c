//Prob 20 : WAP to copy elements of array to another array in reverse order
// e.g - a[]={1,2,3,4,5} -> b[]={5,4,3,2,1}.
//we can use an extra array.
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int brr[size];

printf("Given elements ->");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

printf("reversed elements ->");
    for(int i=0; i<size; i++){
        brr[i] = arr[size-i-1];
        printf("%d ",brr[i]);
    }
    printf("\n");
    
}