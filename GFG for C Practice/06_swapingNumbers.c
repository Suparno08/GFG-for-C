#include<stdio.h>
int main(){
    int a = 5, b = 6;
    printf("Before swaping the number is %d and %d\n",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swaping the number is %d and %d",a,b);

    
    return 0;
}