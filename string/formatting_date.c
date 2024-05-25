#include<stdio.h>
int main() {
    char day[10];
    char month[12];
    int year;

    printf("Enter the current day : ");
    scanf("%s", day);
    printf("Now the current month : ");
    scanf("%s", month);
    printf("Finally enter the current year : ");
    scanf("%d", &year);

    printf("Current date : %s/%s/%d",day, month, year);
    

}