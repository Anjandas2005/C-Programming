#include <stdio.h>

int main() {
    int n ,i,j;
    
    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the pattern
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

