#include "main.h"

int create_file(const char *filename)
{
	int bytesopen = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	bytesopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (bytesopen == -1)
	{
		return (-1);
	}
	return(1);
}

ssize_t file_to_file(const char *filename_from, const char *filename_to)
{
	int res_open_from = 0, res_open_to;
	int bytesRead = 0;
	char *buffer;

	if (filename_from == NULL) 
	{
		return (0);
	}

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		return (0);
	}

	res_open_from = open(filename_from, O_RDONLY); /*open 1st file*/
	if (res_open_from == -1)
	{
		free(buffer);
		return (0);
	}
	res_open_to = open(filename_to, O_RDONLY); /* open 2nd file*/
	if (res_open_to == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(res_open_from, buffer, 1024);
	if (bytesRead == -1)
	{
		close(res_open_from);
		free(buffer);
		return (0);
	}

	while ((bytesRead = read(buffer, 1, sizeof(buffer), filename_from)) > 0)
	{
        write(buffer, 1, bytesRead, filename_to); /* copie du contenu*/
    }

	close(res_open_to);
	close(res_open_from);
	free(buffer);
	return (bytes_read);
}


int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 2)
	{
		exit(97);
		dprintf("Usage: cp file_from file_to");
	}

	res = file_to_file(argv[1], argv[2]);
	return(res);
}