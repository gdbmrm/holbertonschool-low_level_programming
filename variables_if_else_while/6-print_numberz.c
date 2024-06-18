#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i = 0;

        while (i < 11)
        {       putchar(48 + i);
                i++;
        }
        putchar('\n');
        return (0);
}
