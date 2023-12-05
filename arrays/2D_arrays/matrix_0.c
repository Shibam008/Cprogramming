//taking input in a matrix and printing
#include<stdio.h>
int main(){
    int row,col;
    int arr[100][100];
    printf("Enter row - ");
    scanf("%d", &row);
    printf("Enter column - ");
    scanf("%d", &col);
    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("enter element at position (%d,%d) - ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //printing matrix
    printf("Matrix is ->\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}