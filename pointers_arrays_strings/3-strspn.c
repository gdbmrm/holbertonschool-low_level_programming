#include "main.h"
/**
 * _strspn - Calcule la longueur du segment initial d'une chaîn
 *  qui ne contient que des caractères présents dans une autre chaî
 * @s: La chaîne source dans laquelle la recherche est effectué
 * @accept: La chaîne contenant les caractères accept�
 *
 * Cette fonction parcourt la chaîne `
 *  et compte le nombre de caractères initiau
 * qui sont tous présents dans `accept
 *  La fonction s'arrête dès qu'un caract�
 * de `s` n'est pas trouvé dans `accept
 * t retourne la longueur du segment initial
 * correspondant.
 *
 * Return: La longueur du segment initial de `s` qui contient uniquement des
 * caractères présents dans `acce
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p1, *p2;
	unsigned int resultat = 0;

	for (p1 = s; *p1 != '\0'; ++p1)
	{
		for (p2 = accept; *p2 != '\0'; ++p2)
		{
			if (*p1 == *p2)
			{
				break;
			}
		}
		if (*p2 == '\0')
		{
			break;
		}
	resultat++;
	}
	return (resultat);

}
