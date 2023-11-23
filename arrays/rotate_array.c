// **Prob 22 : Rotate the given Array by ‘k’ steps
/*
given arr[]={1,2,3,4,5}, 
size=5, k=3.                     
our ans will be -> {3,4,5,1,2} . 

steps - 
1. k = k%size || if given value of k is greater than the size of array.
2. reverse(arr, 0, size-1) || reverse full array. {5,4,3,2,1}
3. reverse(arr, 0, k-1) || {3,4,5,2,1}
4. reverse(arr, k, n-1) || {3,4,5,1,2} [ans].
*/
// college wallah - array video *******important

#include<stdio.h>
int rotatearray(int arr[], int n, int k){
    if(k > n){    // step - 1
        k = k % n;
    }
// using for loops for reverse some part of array . check problem - reverse_partof_array.c

    for(int i=0,j=n-1; i<j; i++,j--){ //step - 2
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0,j=k-1; i<j; i++,j--){ //step - 3
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=k,j=n-1; i<j; i++,j--){ //step - 4
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int k;
    printf("In how many steps you would like to rotate the array , please enter the value of k : ");
    scanf("%d",&k);

    int ans = rotatearray(arr, size, k);

    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

}