// this program calculates the average of marks of 3 students.
#include <stdio.h>
int main() {
    float marks1, marks2, marks3, average;
    printf("Enter marks of student 1: ");
    scanf("%f", &marks1);
    printf("Enter marks of student 2: ");
    scanf("%f", &marks2);
    printf("Enter marks of student 3: ");
    scanf("%f", &marks3);
    average = (marks1 + marks2 + marks3) / 3;
    printf("Average marks = %.2f", average);
    return 0;
}