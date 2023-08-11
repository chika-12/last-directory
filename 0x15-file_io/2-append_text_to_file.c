#include "main.h"
/**
 * append_text_to_file - appends text  to file
 * @filename: name of file to be appended to
 * @text_content: content to be appended
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	int str_let;
	int buffer;

	if (filename == NULL)
	{
		return (-1);
	}
	ptr = open(filename, O_WRONLY | O_APPEND);
	if (ptr == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (str_let = 0; text_content[str_let]; str_let++)
			;
		buffer = write(ptr, text_content, str_let);
		if (buffer == -1)
		{
			return (-1);
		}
	}
	close(ptr);
	return (1);
}
