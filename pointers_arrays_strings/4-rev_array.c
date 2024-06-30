#include "main.h"
/**
 * reverse_array - inverse un tableau
 *
 * @a: tableau a inversÃ
 * @n: element du tableau a inverser
 */
void reverse_array(int *a, int n)
{
	int debut = 0, fin = n;
	char temp;


	while (debut < fin)
	{
		temp = a[debut];
		a[debut] = a[fin];
		a[fin] = temp;
		debut++;
		fin--;

	}
}
