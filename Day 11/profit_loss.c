//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
#include<math.h>
int main(){
    float cp , sp , profit , loss;
    printf("Enter cost price and selling price : ");
    scanf("%f %f",&cp ,&sp);

profit = sp - cp;
loss = cp - sp;

float pr_percent , lo_percent;

pr_percent = (profit/cp)*100;
lo_percent = (loss/cp)*100;


    if(sp>cp){
        printf("Profit :%.2f%%",pr_percent);
    }else{
        printf("Loss :%.2f%%",lo_percent);
    }
    return 0;
}