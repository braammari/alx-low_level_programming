#include "main.h"
/**
 * read_textfile - name's function
 * @filename: 1 param
 * @letters: 2 param
 * Return: ssize
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	char tab[1024];
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	while (letters > 0)
	{
		bytes_read = read(op, tab, 1024);
		if (bytes_read == -1)
		{
			close(op);
			return (0);
		}
		if (bytes_read == 0)
			break;
		if (bytes_read <= (ssize_t)letters)
			bytes_written = write(STDOUT_FILENO, tab, bytes_read);
		else
			bytes_written = write(STDOUT_FILENO, tab, letters);
		if (bytes_written == -1)
		{
			close(op);
			return (0);
		}
		letters -= bytes_written;
		total_written += bytes_written;
	}
	close(op);
	return (total_written);
}

