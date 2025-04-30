#include <stdio.h>

int main() {
    int n, i, j;

    // Prompt user for input
    printf("Enter the number of rows: ");
    scanf("%d", &n); // Example: 5

    // Outer loop for rows
    for (i = n; i >= 1; i--) {
        // Inner loop for printing numbers starting from n down to (n - i + 1)
        for (j = n; j > n - i; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}

