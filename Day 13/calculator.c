//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter no. :");
    scanf("%d %d %c",&a,&b,&op);

    switch(op){
        case '+':
        printf("%d",a+b);
        break;
     
        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        printf("%d",a/b);
        break;

        case '%':
        printf("%d",a%b);
        break;
    }
  return 0;
}
