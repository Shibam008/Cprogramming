#include<stdio.h>
#include<stdbool.h>
bool palindrome(int arr[], int size){
    int left=0, right=size-1;
    while(left<=right){
        if(arr[left]==arr[right])
        left++,right--;
        return 1;
    }
    return 0;
    
}
int main(){
    int arr[]={1,2,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    bool ans = palindrome(arr,size);
    printf("%d",ans);
    
}