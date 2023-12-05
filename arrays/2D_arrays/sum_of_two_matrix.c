#include<stdio.h>
int main(){
    int arr[][3]={
        {1,2,3},
        {6,3,5},
        {2,3,1}
    };
    int brr[][3]={
        {3,2,3},
        {6,3,5},
        {2,9,6}
    };
    int ans[3][3];

    int row=3, col=3;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}