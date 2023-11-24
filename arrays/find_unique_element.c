#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=sizeof(arr)/sizeof(int);
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i]; // XOR operation
    }
    printf("%d is the unique element.", ans);

}