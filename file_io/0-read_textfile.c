#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int res_open = 0;
	
	if (filename == NULL)
	{
		return (NULL);
	}

	int res_open = open(filename , O_WRONLY );

	if (res_open == -1)
	{
		return (0);
	}

	write(POSIX, )
}