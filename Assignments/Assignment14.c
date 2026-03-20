// this program is to convert binary into decimal number system
#include <stdio.h>
#include <math.h>
void main() {
   
    int binary, decimal = 0, rem, i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal equivalent: %d\n", decimal);
   
}