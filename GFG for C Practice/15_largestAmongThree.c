#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    {
        printf("1st number is largest among three");
    }
    else if (num2>num3 && num2>num1)
    {
        printf("2nd number is largest among three");
    }
    else{
        printf("3rd number is largest among three");
    }
    
    
    return 0;
}