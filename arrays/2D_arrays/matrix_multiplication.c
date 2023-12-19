#include<stdio.h>
int main(){

    printf("\n First Matrix\n");
    int m,n;
    printf("Enter row : ");
    scanf("%d",&m);
    printf("Enter column : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements :\n");
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            scanf("%d",&arr[row][col]);
        }
    }

    printf("\n second Matrix\n");
    int p,q;
    printf("Enter row : ");
    scanf("%d",&p);
    printf("Enter column : ");
    scanf("%d",&q);
    int brr[p][q];
    printf("Enter elements :\n");
    for(int row=0; row<p; row++){
        for(int col=0; col<q; col++){
            scanf("%d",&brr[row][col]);
        }
    }

if(n != p){
    printf("Matrix multiplication is not possible");
}
else{
    int res[m][q];
    for(int row=0; row<m; row++){
        for(int col=0; col<q; col++){
            res[row][col]=0;
            for(int k=0; k<n; k++){
                res[row][col] += arr[row][k] * brr[k][col];
            }
        }
    }

    //printing answer :
    printf("\nAnswer of the matrix multiplication :\n");
    for(int row=0; row<m; row++){
        for(int col=0; col<q; col++){
            printf("%d ",res[row][col]);
        }
        printf("\n");
    } 
}
return 0;
}
