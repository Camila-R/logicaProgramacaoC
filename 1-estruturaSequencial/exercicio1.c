#include <stdio.h>

// Write a program to read the code of item 1, the number of item 1, the unit price of item 1,
// the code of item 2, the number of item 2, and the unit price of item 2.
// Calculate and display the total amount to be paid.

int main(){
    int itemCode1, itemCode2, quantity1, quantity2;
    float price1, price2, totalAmount;

    printf("Enter the code of the first item:\n");
    scanf("%d", &itemCode1);
    printf("Enter the code of the second item:\n");
    scanf("%d", &itemCode2);
    printf("--------------------------\n");
    printf("Thank you!\n\n");

    printf("Now enter the quantity of item %d:\n", itemCode1);
    scanf("%d", &quantity1);
    printf("Now enter the quantity of item %d:\n", itemCode2);
    scanf("%d", &quantity2);
    printf("--------------------------\n");
    printf("Thank you!\n\n");

    printf("What is the price of item %d?\n", itemCode1);
    scanf("%f", &price1);
    printf("What is the price of item %d?\n", itemCode2);
    scanf("%f", &price2);
    printf("--------------------------\n");
    printf("Thank you!\n\n");

    totalAmount = (quantity1 * price1) + (quantity2 * price2);

    printf("###################################\n\n");
    printf("The total amount to be paid is $%.2f\n\n", totalAmount);
    printf("###################################\n");

    return 0;
}
