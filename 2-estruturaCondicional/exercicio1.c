#include <stdio.h>

// Based on the price table, write a program that reads the item code and the quantity of that item.
// Then, calculate and display the total amount to be paid.

// CODE  |  DESCRIPTION       | PRICE
//   1   | Hot Dog            | $4.00
//   2   | X-Salad            | $4.50
//   3   | X-Bacon            | $5.00
//   4   | Simple Toast       | $2.00
//   5   | Soft Drink         | $1.50

int main(){
    int productCode, quantity;
    float price1, price2, price3, price4, price5, total;

    price1 = 4.00;
    price2 = 4.50;
    price3 = 5.00;
    price4 = 2.00;
    price5 = 1.50;

    printf("-------------------------------\n");
    printf("--------PRICE TABLE-----------\n");
    printf("-------------------------------\n");
    printf("--------Choose an item--------\n");
    printf("-------------------------------\n");
    printf("[ 1 ] Hot Dog        - $ 4.00\n");
    printf("[ 2 ] X-Salad        - $ 4.50\n");
    printf("[ 3 ] X-Bacon        - $ 5.00\n");
    printf("[ 4 ] Simple Toast   - $ 2.00\n");
    printf("[ 5 ] Soft Drink     - $ 1.50\n");
    printf("-------------------------------\n");
    printf("Enter your choice:\n");
    printf("-------------------------------\n");
    scanf("%d", &productCode);

    printf("\nEnter the quantity:\n");
    scanf("%d", &quantity);
    printf("-------------------------------\n");

    switch (productCode) {
    case 1:
        total = price1 * quantity;
        printf("Total amount to be paid: $ %.2f\n", total);
        break;
    case 2:
        total = price2 * quantity;
        printf("Total amount to be paid: $ %.2f\n", total);
        break;
    case 3:
        total = price3 * quantity;
        printf("Total amount to be paid: $ %.2f\n", total);
        break;
    case 4:
        total = price4 * quantity;
        printf("Total amount to be paid: $ %.2f\n", total);
        break;
    case 5:
        total = price5 * quantity;
        printf("Total amount to be paid: $ %.2f\n", total);
        break;
    default:
        printf("Invalid option\n");
        break;
    }

    return 0;
}