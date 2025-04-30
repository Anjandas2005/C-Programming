#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate the sum of digits raised to the power of n
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n); // Use math.h for power function
        original /= 10;
    }

    // Check if it is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

