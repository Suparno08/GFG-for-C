#include <stdio.h>
int main()
{
    int num;
    int rem;
   
    int sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);
    int numST = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum*10 + rem;
        num = num / 10;
    }
    if (numST == sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    
    

    return 0;
}