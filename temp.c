#include<stdio.h>
int main(){
    int temp;
    printf("Enter temp :");
    scanf("%d",&temp);

    printf("fahrenheit :%.2f\n",((temp * 9.0/5)+32));
    return 0;
}