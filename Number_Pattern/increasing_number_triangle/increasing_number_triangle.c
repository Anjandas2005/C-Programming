#include <stdio.h>

int main() 
{
    int n, i, j; // Variable declarations: n for rows, i and j for loops

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n); // Read user input

    // Outer loop controls the number of rows
    for (i = 1; i <= n; i++) 
	{
        // Inner loop prints numbers from 1 to i in each row
        for (j = 1; j <= i; j++) 
		{
            printf("%d", j); // Print number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}

