
//Problem statement -> : Multiply odd indexed elements by 2 and add 10 to the even elements(College Wallah.P-14)

#include<stdio.h>
int main(){
    int arr[]={2,5,6,3,4,8,9,7};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i=0; i<size; i++){
    printf("%d ",arr[i]);
    }
}