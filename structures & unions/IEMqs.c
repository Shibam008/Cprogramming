/*
define a structure type struct personal that would contain person name, date of joining and salary as members. Now use this structure to read information of n (taken as input) number of persons and print the same on screen
*/
#include<stdio.h>
#include<string.h>
struct personal{
    char name[30];
    char date_of_joining[10];
    float salary;
};

int main(){
    int n;
    printf("Enter the number of persons : ");
    scanf("%d", &n);

    struct personal persons[n];

    for(int i=0; i<n; i++){
        printf("\nEnter details of person - %d\n",i+1);

        printf("Enter name : ");
        scanf("%s",&persons[i].name);

        printf("Date of joining : ");
        scanf("%s",&persons[i].date_of_joining);

        printf("Enter salary : ");
        scanf("%f",&persons[n].salary);
    }
printf("\nDetails of the Persons\n");
    for(int i=0; i<n; i++){
        
        printf("Name : %s",persons[i].name);
        printf(" || Date of joining : %s",persons[i].date_of_joining);
        printf(" || Salary : %.2f",persons[i].salary);
        printf("\n");
    }
}

