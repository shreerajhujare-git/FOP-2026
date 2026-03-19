#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Original value: %d\n", a);

    a++;
    printf("After Post-Increment (a++): %d\n", a);

     ++a;
    printf("After Pre-Increment (++a): %d\n", a);

    return 0;
}