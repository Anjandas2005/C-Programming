#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first n terms of the Fibonacci series
    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms are 0 and 1
        } else {
            next = first + second; // Next term is the sum of the previous two
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}

