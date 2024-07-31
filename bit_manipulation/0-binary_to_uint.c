#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    int last_digit = 0, i = 0, power = 0;
    int nb_bin = atoi(b);

    while (nb_bin)
    {
        if (nb_bin != 0 && nb_bin != 1)
        {
            return (0);
        }
    }
    while (nb_bin != 0)
    {
        last_digit = nb_bin % 10;
        nb_bin /= 10 ;
        power += last_digit*pow(2,i);
        i++;
    }
    return (power);
}