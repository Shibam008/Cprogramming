// important problem. College wallah . **prob 19.
#include<stdio.h>
#include<limits.h> 
int main(){
    int arr[]=//{1,2,3,4,5};
    //{5,4,3,2,1};
    {1,2,4,4,5};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN, smax; //smax = second max
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            smax=max; // smax is now previous max
            max=arr[i]; // max is now new max
            
        }
        // (max > arr[i])
        else if(smax < arr[i] && max != arr[i]){ 
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}