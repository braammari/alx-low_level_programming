#include "main.h"

void exit_with_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	const char *flf = argv[1];
	const char *flt = argv[2];
	int opf,fd_to;
	char buffer[BUFFER_SIZE];
	size_t bytes_read, bytes_written;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to");
	opf = open(flf, O_RDONLY);
	if (opf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", flf);
		exit(98);
	}
	fd_to = open(flt, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", flt);
		exit(99);
	}
	while ((bytes_read = read(opf, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", flt);
			exit(99);
		}
	}
	if ((int)bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", flf);
		exit(98);
	}
	if (close(opf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opf);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
