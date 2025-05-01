#include <stdio.h>

// Read an integer value N. This value will determine how many integers X will be read next.
// Count how many of these values X are within the range [10,20] and how many are outside the range,
// and print the results using the words "in" and "out".

int main(){
    int n, number, in = 0, out = 0, counter = 1;

    printf("Enter how many numbers will be input: ");
    scanf("%d", &n);

    while (counter <= n){
        printf("Enter the number: ");
        scanf("%d", &number);

        if(number >= 10 && number <= 20){
            in++;
        } else{
            out++;
        }

        counter++;
    }

    printf("%d in\n%d out", in, out);

    return 0;
}
