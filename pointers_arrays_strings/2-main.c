#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "mariama goudiaby";
    char *f;

    f = _strchr(s, 'i');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
