#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int res_open = 0;
	int res_write
	
	if (filename == NULL)
	{
		return (NULL);
	}

	res_open = open(filename , O_WRONLY );

	if (res_open == -1)
	{
		return (0);
	}
	ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
    if (bytesRead == -1) {
	res_write = write(STDOUT_FILENO,  )
}