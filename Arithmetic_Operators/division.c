#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = (float)a / b;

    printf("Division = %.2f", result);

    return 0;
}