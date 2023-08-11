#include "main.h"
/**
 * exitWithError - checks error
 * @message: parameter
 * @exitCode: parameter
 * Return: 0
 */
void exitWithError(const char *message, int exitCode)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exitCode);
}
/**
 * copyFile - copies the file
 * @srcFile: parameter
 * @destFile: parameter
 * Return: 0
 */
void copyFile(const char *srcFile, const char *destFile)
{
	char buffer[1024];
	ssize_t bytesRead;
	int src_fd, dest_fd;

	src_fd = open(srcFile, O_RDONLY);

	if (src_fd == -1)
		exitWithError("Error: Can't read from source file", 98);
	dest_fd = open(destFile, O_WRONLY |
		O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (dest_fd == -1)
	{
		close(src_fd);
		exitWithError("Error: Can't write to destination file", 99);
	}
	while ((bytesRead = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytesWritten = write(dest_fd, buffer, bytesRead);

		if (bytesWritten == -1)
		{
			close(src_fd);
			close(dest_fd);
			exitWithError("Error: Can't write to destination file", 99);
		}
	}
	if (bytesRead == -1)
	{
		close(src_fd);
		close(dest_fd);
		exitWithError("Error while reading from source file", 100);
	}
	if (close(src_fd) == -1 || close(dest_fd) == -1)
		exitWithError("Error: Can't close file descriptors", 100);
}
/**
 * main - checks file
 * @argc: argument count
 * @argv: argument velocity
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		exitWithError("Usage: cp source_file destination_file", 97);
	copyFile(argv[1], argv[2]);
	return (0);
}
