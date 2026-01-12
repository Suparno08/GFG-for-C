#include <stdio.h>
#include <math.h>
int main()
{
    int n = 5;
    int isPrime = 1;
    for (int i = 2; i <= pow(n, 0.5); i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("The number is  prime");
    }
    else
    {
        printf("Number is not prime");
    }

    return 0;
}