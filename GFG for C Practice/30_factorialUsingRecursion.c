// factorial of a number using recursion
#include <stdio.h>
int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * fact(a - 1);
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {

        printf("The factorial is %d", fact(num));
    }

    return 0;
}