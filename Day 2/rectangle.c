//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
    
#include<stdio.h>
int main(){
    int length , breadth;
    length = 5;
    breadth = 10;

    printf("Area of rectangle :%d\n",length * breadth);
    printf("Perimeter of rectangle :%d\n",2*(length + breadth));

    return 0;
}


