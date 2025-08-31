//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides :");
    scanf("%d %d %d",&a,&b,&c);

    if( a!= b && b!=c && a!=c){
        printf("Scalene");
    }else if(a==b && b==c && a==c){
        printf("Equilateral");
    }else{
        printf("Isosceles");
    }
    return 0;
}
