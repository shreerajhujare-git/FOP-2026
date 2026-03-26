// this program is to accept a number from the user and reverse it.
#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);
     while (num != 0) {
        digit = num % 10;          
        reverse = reverse * 10 + digit; 
        num = num / 10;            
    }

    printf("Reversed number: %d", reverse);

    return 0;
}