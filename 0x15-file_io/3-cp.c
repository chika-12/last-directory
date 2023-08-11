#include "main.h"
/**
 * check_IO_state - checks file
 * @state: describes file to be opened
 * @filename: name of file
 * @mode: mode of operation
 * @ptr: descriptor
 * Return: 0
 */
void check_IO_state(int state, int ptr, char *filename, char mode)
{
	if (mode == 'C' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ptr %d\n", ptr);
		exit(100);
	}
	else if (mode == 'O' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * main - copies the content of file to file
 * @argc: argument count
 * @argv: arguments velocity
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;

	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_state(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_state(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_state(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_state(-1, -1, argv[2], 'W');
	}

	close_src = close(src);
	check_IO_state(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_state(close_dest, dest, NULL, 'C');

	return (0);
}
