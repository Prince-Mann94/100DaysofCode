#include<stdio.h>
int main(){
    int a,m;
    printf("Enter no. :");
    scanf("%d",&a);
    while(a!=0){
        int r;
        r = a%10;
        a = a/10;
        printf("%d",r);
        
    }
    return 0;
}