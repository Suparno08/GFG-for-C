#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 1000; i++)
    {
        int num = i;
        int rem, sum = 0;

        while (num > 0)
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
