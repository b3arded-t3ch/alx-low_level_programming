#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file
 *
 * Return: size of chars read
 * @filename: the file to read from
 * @letters: size of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t read_bytes, write_result;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == (size_t)-1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	write_result = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_result == (size_t)-1 || write_result != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (read_bytes);
}
