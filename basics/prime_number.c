#include<stdio.h>
int main (){

    int num,count=0,i;
    printf("Enter a positive integer num : ");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if (num%i==0){
            printf("%d is not a prime num",num);
            break;
        }
        else{
            printf("%d is  a prime num",num);
            break;
        }
    }
    return 0;
}






   /*
   for(i=2;i<num;i++)
    {
     if (num%i==0)             
      {
        count++;
        break;
      }
    }
    if(count==0){
        printf("%d is  a prime num",num);
    }
    else{
        printf("%d is not a prime num",num);
    }

এখানে কাউন্ট নামক variable use krlam কারণ যদি 2 / অন্য কোনও , নাম্বার দিয়ে আগেই বাগ হয়ে যায় তাহলে লুপ থেকে এগজিট করে যাবে .for better time complexity
   
   */