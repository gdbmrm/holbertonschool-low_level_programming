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
}

ssize_t file_to_file(const char *filename, const char *filename_to)
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

	bytesRead = read(res_open, buffer, 1024);
	if (bytesRead == -1)
	{
		close(res_open);
		free(buffer);
		return (0);
	}

	res_write = write(bytesRead, buffer, 1024);
	if (res_write == 0 || res_write == -1)
	{
		return (0);
	}

	close(res_open);
	free(buffer);
	return (res_write);
}


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		exit(97);
		dprintf("Usage: cp file_from file_to");
	}




}