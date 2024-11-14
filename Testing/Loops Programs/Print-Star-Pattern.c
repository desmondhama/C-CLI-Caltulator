#include <stdio.h>

/*
 * Program to print a pattern
 * of stars [*] in a particular
 * order and number of times.
 * Author: Desmond Hamandawana
 * Date: 13/11/2024
 *
 * User inputs the number of rows.
 * Stars are printed in an increasing pattern per row.
 *
 * Example output for input 8:
 * *
 * **
 * ***
 * ****
 * *****
 * ******
 * *******
 * ********
 */

int main() {
    int rowOfStars;  // Variable to store the number of rows the user wants

    printf("Enter the number of rows for the star pattern: ");
    scanf("%d", &rowOfStars);  // Input the number of rows from the user

    // Outer loop: controls the number of rows (i.e., how many lines of stars are printed)
    for (int i = 1; i <= rowOfStars; i++) {
        
        // Inner loop: prints stars on each row, increasing with each row number
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");  // Move to the next line after printing stars for the current row
    }

    return 0;  // Indicate that the program ended successfully
}