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

int main(void)
{
    int num;

    for (num = 48; num <= 57; num++)
    {
        putchar(num);
    }
    putchar(10);
    return (0);
}
