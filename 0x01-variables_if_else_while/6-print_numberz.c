#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10,
 *              followed by a new line.
 *              Uses only putchar function and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    // Use putchar to print single digit numbers from 0 to 9
    for (int i = 0; i < 10; ++i) {
        putchar(i + '0'); // Convert integer to character
    }
    putchar('\n'); // Print a newline character
    return 0;
}

