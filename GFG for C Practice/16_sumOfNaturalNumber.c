#include<stdio.h>
int main(){
    int num,sum = 0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        sum = sum+i;

    }
    printf("Sum of nth number is %d",sum);
    return 0;
}