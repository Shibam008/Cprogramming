// P.S -> Count the number of elements in given array greater than a given number . (college wallah.Hw-3)
#include<stdio.h>
int main(){
    int nums[]={12,52,65,35,21,45,66,89};
    int size = sizeof(nums)/sizeof(int);
    int target = 30;
    int count = 0;
for(int i=0; i<size; i++){
        if(nums[i]>target) count++;
}
printf("Number of elements that are bigger than the target is = %d",count);
    return 0;
}