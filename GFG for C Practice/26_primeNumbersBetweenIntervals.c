#include <stdio.h>

void primeInterval(int a, int b) {
    int isPrime;

    for (int i = a; i <= b; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
}

int main() {
    int num1, num2;
    printf("Enter two interval:\n");
    scanf("%d %d", &num1, &num2);

    primeInterval(num1, num2);

    return 0;
}
