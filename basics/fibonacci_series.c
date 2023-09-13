#include<stdio.h>
int main (){
    int firstnum,secnum,nextnum,terms;
    firstnum = 0; // first number
    secnum = 1;  // second number 
    nextnum = firstnum + secnum;

    printf("How many terms of fibonacci series do you want ? Enter terms : ");
    scanf("%d", &terms);

    printf("%d %d ",firstnum,secnum); // ekhan theke 0,1 ta print hoe jachhe 
    for(int i=3; i<=terms; i++){     // jehutu 2 to term previous line e print hoe jachhe tai amader loop take 3 diye initialize krte hbe 

        printf("%d ",nextnum);
        firstnum = secnum;
        secnum = nextnum;
        nextnum = firstnum + secnum ;

    }
return 0;
}