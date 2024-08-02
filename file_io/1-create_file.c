#include "main.h"
/**
 * _strlen - fonction qui renvoie la longeur d'un string
 *
 * Write a function that returns the length of a string.
 *
 * @s: string d'entrÃe
 *
 * Return: longeur du string
 */


int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}
/**
* create_file - fonction
* Create a function that creates a file.
* @filename: nom du fichier
* @text_content: texte a ecrire dans le fichier
* Return: 1 si cela s'est bien passé
* et -1 si il y a des erreurs
*/
int create_file(const char *filename, char *text_content)
{
	int bytesopen = 0, byteswritten = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (-1);
	}

	bytesopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (bytesopen == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		buffer = malloc(sizeof(text_content));
		buffer = text_content;
		byteswritten = write(bytesopen, buffer, _strlen(text_content));
		if (byteswritten == 0 || byteswritten == -1)
		{
			return (-1);
		}
	}
	return (1);
}
