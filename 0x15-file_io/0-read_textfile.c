#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX std op
 * @filename: The file to be read
 * @letters: The number of letters it should print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written_bytes);
}

