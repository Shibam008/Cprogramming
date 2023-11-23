#include<stdio.h>

int reverseApart(int arr[], int a, int b){
    for(int i=a,j=b; i<j; i++,j--){  
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    int x,y;
    printf("Enter the value of starting index (x) & ending index (y) : ");
    scanf("%d %d", &x, &y);

    int ans = reverseApart(arr,x,y);
        for(int i=0; i<size; i++){
            printf("%d ",arr[i]);
        }


}