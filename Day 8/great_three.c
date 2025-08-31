//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no's :");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c){
        printf("greatest %d",a);
    }else if(b>=a && b>=c){
        printf("greatest %d",b);
    }else {
        printf("greatest %d",c);
    }
    return 0;
}


