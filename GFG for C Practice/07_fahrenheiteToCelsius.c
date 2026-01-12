#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&c);
    f = 9.00/5.00*(c)+32;
    printf("In fahrenheite it is %.2f\n",f);
    return 0;
}