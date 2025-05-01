#include <stdio.h>

// Write a program to read the radius of a circle, then display the area of the circle
// with four decimal places as shown in the examples.
// Formula: area = pi * radius²
// Consider the value of π = 3.14159

int main(){
    float radius, area, pi = 3.14159;

    printf("Enter the radius of a circle:\n");
    scanf("%f", &radius);

    area = pi * (radius * radius);

    printf("###################################\n\n");
    printf("A = %.4f\n\n", area);
    printf("###################################\n");

    return 0;
}
