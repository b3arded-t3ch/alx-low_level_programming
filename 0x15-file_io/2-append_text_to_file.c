#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - adds text to file
 *
 * Return: 1 on success
 * @filename: name of file to append text to
 * @text_content: text to append
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

