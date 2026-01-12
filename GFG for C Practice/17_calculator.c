#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    
    printf("Enter '+' or '-' or '*' or '/':\n");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("The sum is %d",a+b);
        break;
    case '-':
        printf("The substraction is %d",a-b);
        break;
    case '*':
        printf("The multiplication is %d",a*b);
        break;
    case '/':
        printf("The division is %d",a/b);
        break;
    
    default:
        printf("You choose a wrong input");
        break;
    }

    return 0;
}