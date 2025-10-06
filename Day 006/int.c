//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
   int num;

   printf("Enter no. :");
   scanf("%d",&num);

   if(num > 0){
    printf("positive");
   }else if(num < 0){
    printf("negative");
   }else {
   printf("zero");
   
   return 0;
   }
}
