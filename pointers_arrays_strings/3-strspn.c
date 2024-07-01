#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, n;
	unsigned int resultat;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (n = 0; s[n] != '\0'; n++)
		{
			if (accept[i] == s[n])
			{
				resultat++;
			} 
		}
	}
	return (resultat);

}
