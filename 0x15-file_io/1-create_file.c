#include "main.h"
/**
 * create_file - name's function
 * @filename: 1 param
 * @text_content: 2 param
 * Return: ssize
 **/
int create_file(const char *filename, char *text_content)
{
	int op;
	size_t len;
	ssize_t bw;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bw = write(op, text_content, len);
		if (bw == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
