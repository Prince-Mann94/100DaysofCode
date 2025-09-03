//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("enter no. :");
    scanf("%d",&n);

    m =n/2;
    
    int fact = 1;
    for(int i=1;i<=m;i++){
        fact = fact*i;
    }
    printf("%.1f",pow(2,m)*fact);

}