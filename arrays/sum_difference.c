//P.S ->  Prob 15 : Print difference b/w odd indexed and even indexed elements(college wallah.P-15)
#include<stdio.h>
int sumdifference(int nums[], int size){
    int sumOdd = 0, sumEven = 0;
    for(int i=0; i<size; i++){
        if(i%2==0){
            sumEven += nums[i];
        }
        else{
            sumOdd += nums[i];
        }
    }
    return (sumOdd - sumEven);
}
int main(){
    int nums[]={2,3,6,5,4,9,8};
    int size = sizeof(nums)/sizeof(int);
    int ans = sumdifference(nums, size);
    printf("Difference b/w odd indexed and even indexed elements = %d",ans);
    return 0;
}