#include <stdio.h>

void main () {
    // Assignment 08
    // Program to input marks of five subjects and calculate persentage and grade

    int marks[5];
    int total = 0;
    float percentage;

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
