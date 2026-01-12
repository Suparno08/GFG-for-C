#include<stdio.h>
int main(){
    int num,multi = 1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        multi = i * multi;
    }
    printf("The factorial is %d",multi);
    
    return 0;
}