#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Read the values of the three coefficients "a", "b", and "c" of a quadratic equation (ax² + bx + c = 0).
// Then, display the roots of the equation using the quadratic formula (Bhaskara).
// If the equation has no real roots (i.e., "a" cannot be zero, and "delta" cannot be negative),
// print "Impossible to calculate".

int main(){
    float coefficientA, coefficientB, coefficientC, delta, x1, x2;

    printf("Enter coefficient A: ");
    scanf("%f", &coefficientA);
    printf("-------------------------------\n");
    printf("Enter coefficient B: ");
    scanf("%f", &coefficientB);
    printf("-------------------------------\n");
    printf("Enter coefficient C: ");
    scanf("%f", &coefficientC);
    printf("-------------------------------\n");

    delta = (coefficientB * coefficientB) - (4 * coefficientA * coefficientC);

    if(delta < 0 || coefficientA == 0){
        printf("Impossible to calculate");
    } else {
        x1 = (-coefficientB + sqrt(delta)) / (2 * coefficientA);
        x2 = (-coefficientB - sqrt(delta)) / (2 * coefficientA);
        printf("X1 = %.2f\nX2 = %.2f", x1, x2);
    }

    return 0;
}
