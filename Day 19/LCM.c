//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
int main(){
    int a,b,lcm,gcd;
    printf("enter no.(a and b) :");
    scanf("%d %d",&a,&b);

    
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;
    printf("LCM :%d",lcm);
    return 0;
}