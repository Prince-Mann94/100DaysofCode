#include<stdio.h>
int main(){
    int Day;
    printf("Enter Day(1-7) :");
    scanf("%d",&Day);

    switch(Day){
        case 1:printf("monday");
        break;
        case 2:printf("tuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("Sunday");
        break;
        default:printf("Not a valid day");
    }
}