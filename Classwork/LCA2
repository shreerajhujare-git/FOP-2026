// This program will accept list of N integers and partition list into two sublists even and odd numbers.        
#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];

    // 1. Get the number of elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    int evenNumbers[evenCount], oddNumbers[oddCount];
    int evenIndex = 0, oddIndex = 0;

    for (i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[evenIndex++] = numbers[i];
        } else {
            oddNumbers[oddIndex++] = numbers[i];
        }
    }

    printf("Even numbers:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    printf("Odd numbers:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    return 0;
}