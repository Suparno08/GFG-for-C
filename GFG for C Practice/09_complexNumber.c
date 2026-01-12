#include <stdio.h>
int main()
{
    int real1, real2;
    int imaginary1, imaginary2;
    printf("Enter the real part of your number:\n");
    scanf("%d%d", &real1, &real2);
    printf("Enter Imaginary part:\n");
    scanf("%d%d", &imaginary1, &imaginary2);
    if (imaginary1 < 0)
    {
        printf("The complex number is %d %di\n", real1, imaginary1);
    }
    else
    {

        printf("The complex number is %d+ %di\n", real1, imaginary1);
    }
    if (imaginary2<0)
    {
        printf("The complex number is %d %di\n", real2, imaginary2);
    }
    else{
         printf("The complex number is %d+ %di\n", real2, imaginary2);
    }
    

    return 0;
}