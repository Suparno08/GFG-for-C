#include<stdio.h>

int main() {
    int num, rem;
    int arr[32];
    int i = 0;   // FIX 1: initialize i

    printf("Enter a number:\n");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 2;
        arr[i] = rem;
        i++;
        num = num / 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    return 0;
}
