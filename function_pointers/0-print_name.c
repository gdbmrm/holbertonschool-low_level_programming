#include "function_pointers.h"
/**
* print_name - nom fonction
* Write a function that prints a name.
* @name: nom a afficher
* @f: fonction qui affiche le nom
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}
