#include <stdio.h>
#include <math.h>
void prime(int a)
{
    int isPrime = 1;
    for (int i = 2; i < sqrt(a); i++)
    {
        if (a % i == 0)
        {
            isPrime = 0;
        }
        else
        {
            isPrime = 1;
        }
    }
    if (isPrime)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    prime(num);
    return 0;
}