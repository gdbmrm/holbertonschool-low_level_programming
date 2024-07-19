#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char print_char(char args)
{
    char c = (char)va_arg(*args, int);
    printf("%c", c);
}

int print_int(int args)
{
    int i = va_arg(*args, int);
    printf("%d", i);
}

float print_float(float args)
{
    double f = va_arg(*args, double);
    printf("%f", f);
}

char *print_string(char *args)
{
    char *s = va_arg(*args, char *);
    if (s == NULL)
    {
        printf("(nil)");

    } else
    {
    printf("%s", s);
    }
}

typedef struct printall
    {
        char *lettre;
        void (*f)(va_list args);
    } printall;

void print_all(const char * const format, ...)
{
    va_list args;
    
    printall letter[] = {
        {'c', print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };
    int i = 0, n = 0;

    if (format == NULL)
    {
        return;
    }    

    va_start(args, format);
    while (format[i] != '\0')
    {
        while (letter[n].lettre != NULL)
        if (strcmp(format[i], letter[n].lettre) == 0)
        {
            letter[n].f(args);
            break;
        }
        i++;
        n++;
    }
    va_end(args);

}
