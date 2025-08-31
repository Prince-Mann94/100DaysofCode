#include<stdio.h>
#include<math.h>
int main(){

    int num1 ,num2, num3;
    printf("Enter coefficients :");
    scanf("%d %d %d",&num1 ,&num2, &num3);

    float D;
    D = sqrt(num2*num2 -4*num1*num3);
    float R1 ,R2;

    R1 = (-num2 + D)/2*num1;
    R2 = (-num2 - D)/2*num1;

    if(D > 0){
        printf("Real and distinct %.1f %.1f",R1 , R2);
    }else if(D == 0){
        printf("Real and equal %.1f %.1f",R1 , R2);
    }else{
        printf("Roots are imaginary");
    }
    return 0;
}
