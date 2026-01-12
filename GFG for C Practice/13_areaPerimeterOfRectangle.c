#include<stdio.h>
int main(){
    float length,bredth;
    printf("Enter length and bredth of a rectangle:\n");
    scanf("%f%f",&length,&bredth);
    printf("The area is %.2f and perimeter is %.2f",length*bredth,2*(length+bredth));
    return 0;
}