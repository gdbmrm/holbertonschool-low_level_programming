#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
        char *entier = "0123456789";
        int i = 0;

        while (i < 10)
        {       putchar(entier[i]);
                i++;
        }


        putchar('\n');
        return (0);
}
