#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be written in filename
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int ptr;
	int str_let;
	int buffer;

	if (!filename)
	{
		return (-1);
	}
	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ptr == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (str_let = 0; text_content[str_let]; str_let++)
		;
	buffer = write(ptr, text_content, str_let);
	if (buffer == -1)
	{
		return (-1);
	}
	close(ptr);
	return (1);
}

