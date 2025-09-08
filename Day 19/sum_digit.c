//Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>
int main(){
    int a,r;
    printf("enter no. :");
    scanf("%d",&a);

    int sum = 0;
    while(a>0){
        r = a%10;
        sum = sum + r;
        a = a/10;
    }
    printf("%d",sum);
    return 0;
}
