//This program is to accept the number of terms and find the sum of sine series
#include <stdio.h>
#include <math.h>
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int i,n;
    float sum=0,x;
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);    
    for(i=1;i<=n;i++)
      {
         int power = 2 * i - 1; // Calculate the power for sine series
         int positivesign = 1; 
         sum = sum + (positivesign * pow(x, power) / factorial(power)); // Add the positive term
         positivesign = -positivesign;
      }
      printf("addition of sine series is %.2f",sum);
    return 0;
} 
    
