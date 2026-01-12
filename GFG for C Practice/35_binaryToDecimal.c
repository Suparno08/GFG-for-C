#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem = 1, sum = 0, i = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem * pow(2, i);

        num = num / 10;

        i++;
    }
    printf("%d", sum);
    return 0;
}