#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

void print_all(const char * const format, ...)
{
    va_list args;
    if (format == NULL)
    {
        return;
    }    

    va_start(args, strlen(format));



    va_end(args);



}