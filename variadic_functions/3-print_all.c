#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

char print_char(char args)
{
    return(char args);
}

int print_int(int args)
{
    return(int args);
}

float print_float(float args)
{
    return(float args);
}

char *print_string(char *args)
{
    return(char *args);
}

void print_all(const char * const format, ...)
{
    va_list args;
    typedef struct
    {
        char lettre;
        (*f)();

    }



    if (format == NULL)
    {
        return;
    }    

    va_start(args, strlen(format));



    va_end(args);



}