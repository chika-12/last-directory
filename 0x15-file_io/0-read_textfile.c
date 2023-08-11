#include "main.h"
/**
 * read_textfile - reads text file
 * @filename: name of file
 * @letters: number of bytes to print
 *
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	ssize_t read_file;
	ssize_t write_file;
	char *buffer;

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(ptr);
		return (0);
	}
	read_file = read(ptr, buffer, letters);
	close(ptr);

	if (read_file == -1)
	{
		close(read_file);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	free(buffer);
	if (read_file != write_file)
	{
		return (0);
	}
	return (write_file);
}
