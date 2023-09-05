#include "main.h"
/**
 * append_text_to_file - name's function
 * @filename: 1 param
 * @text_content: 2 param
 * Return: ssize
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	 FILE *file;
	 size_t len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	len = strlen(text_content);
	if (fwrite(text_content, 1, len, file) != len)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
