#include<stdio.h>
#include<limits.h>

int maxans(int arr[], int size){
    int max = INT_MIN;
    int i;
    for(i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int minans(int arr[], int size){
    int min = INT_MAX;
    int i;
    for(i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main (){
    int arr[5],i,ans1,ans2;
    int size = 5;
    printf("Enter 5 integers : ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    ans1= maxans(arr, size);
    ans2 = minans(arr, size);
    printf("Maximum element is %d\n",ans1);
    printf("Maximum element is %d\n",ans2);
    
}