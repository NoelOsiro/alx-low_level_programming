#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char buffer[BUF_SIZE];
	ssize_t total_read = 0;
	ssize_t bytes_read;

	while (total_read < letters &&
		(bytes_read = fread(buffer, 1, BUF_SIZE, file)) > 0)
	{
		ssize_t bytes_to_write =
			(letters - total_read) < bytes_read ? (letters - total_read) : bytes_read;
		ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);

		if (bytes_written < 0)
		{
			fclose(file);
			return (0);
		}
		total_read += bytes_written;
		if (bytes_written != bytes_to_write)
		{
			fclose(file);
			return (0);
		}
	}

	fclose(file);
	return (total_read);
}
