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
* append_text_to_file - fonction
* Write a function that appends text at the end of a file.
* @filename: nom du fichier
* @text_content: contenu à ajouter dans le fichier
* Return: 1 if the file exists
* -1 if the file does not exist or if you do not have the required permissions
* to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int bytesopen = 0, byteswritten = 0;
	char *buffer;

	if (filename_to == NULL)
	{
		return (-1);
	}

	bytesopen = open(filename_to, O_APPEND | O_WRONLY);
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
