#include "main.h"
/**
 * exitWithError - prints to stderr
 * @message: parameter
 * @exitCode: parameter
 * Return: -1
 */
void exitWithError(const char *message, int exitCode)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exitCode);
}
/**
 * main - prints from command line
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int dest_fd, src_fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
	exitWithError("Usage: cp file_from file_to", 97);
	}

	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 
			S_IRUSR | S_IWUSR | S_IRGRP);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(src_fd);
		exit(99);
	}
	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(src_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "An error occurred while reading from %s\n", file_from);
		close(src_fd);
		close(dest_fd);
		exit(100);
	}
	if (close(src_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
