//P.S -> If the mark of any student is less than 35, print its roll number
//roll number here reffers to the index of the array.
#include<stdio.h>
int main(){
    //int marks[10]={55,96,65,85,22,53,33,34,29,30};
    int marks[10];
    int size = 10;
    for(int i=0; i<size; i++){
        printf("Enter the Mark of student %d - ",i);
        scanf("%d",&marks[i]);
    }
    
    for(int i=0; i<size; i++){
        if (marks[i]<35){
            printf("Roll no. of the student is - %d\n",i);
        }
    }
}