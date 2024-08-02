#include "main.h"
/**
* read_textfile - fonction
* Write a function that reads a text file
* and prints it to the POSIX standard output.
* @filename: fichier
* @letters: nombre de lettre a afficher
* Return: nombre de caractere afficher
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int res_open = 0;
	int res_write = 0, bytesRead = 0;
	char *buffer;

	if (filename == NULL || letters <= 0)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	res_open = open(filename, O_RDONLY);
	if (res_open == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(res_open, buffer, letters);
	if (bytesRead == -1)
	{
		close(res_open);
		free(buffer);
		return (0);
	}

	res_write = write(STDOUT_FILENO, buffer, bytesRead);
	if (res_write == 0 || res_write == -1)
	{
		return (0);
	}

	close(res_open);
	free(buffer);
	return (res_write);
}
