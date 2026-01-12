#include <stdio.h>

int main()
{
    int num, rem = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int sum = 0;
    int numStart = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem*rem*rem;
        num = num / 10;
        
    }
    if (numStart == sum)
    {
        printf("It is a armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }

    return 0;
}