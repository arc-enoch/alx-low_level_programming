#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by a comma and a space.
 * Numbers should be printed in ascending order.
 * You can only use the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar('0' + num);

        if (num < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
    return (0);
}
}
