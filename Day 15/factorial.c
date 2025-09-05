//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int n;
    printf("enter no. :");
    scanf("%d",&n);
    
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }printf("factorial of no. :%d",fact);
    return 0;
}
