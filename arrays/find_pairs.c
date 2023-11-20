// Prob 16 : Find total number of pairs whose sum add up to x
// example {1,2,3,4,5,6,7,8} -> suppose targer X = 12
//in the array we get (4,8) and (5,7) as a pair. * we do not take same num pair like-(6,6)
// expected output = 2 [as we get two pairs]
#include<stdio.h>

int solution(int arr[], int size, int x){
    int paircount=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            //printf("(%d,%d)",arr[i],arr[j]); //printing pairs .
            if(arr[i]+arr[j] == x)
            paircount++;
        }
    }
    return paircount;
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int target = 12;
    int ans = solution(arr,size,target);
    printf("No of pairs -> %d",ans);
    
    
}