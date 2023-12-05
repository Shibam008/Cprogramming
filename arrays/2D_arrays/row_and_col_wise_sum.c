#include<stdio.h>

int rowsum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
        sum += arr[i][j];
        }
        printf("sum of %d row - %d",i,sum);
        printf("\n");
    }
}

int columnsum(int arr[][3], int row, int col){
    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0; j<row; j++){
        sum += arr[j][i];
        }
        printf("sum of %d col - %d",i,sum);
        printf("\n");
    }
}



int main(){
    int arr[][3]={
        {1,2,3},
        {6,3,5},
        {2,3,1}
    };
    int row=3, col=3;
rowsum(arr,row,col);
printf("\n");
columnsum(arr,row,col);
}