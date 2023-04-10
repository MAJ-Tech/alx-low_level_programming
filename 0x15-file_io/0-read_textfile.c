#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: File to read from.
 * @letters: Number of bytes to read.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes_write, num_bytes_read, file_desc;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
	{
		free(buffer);
		return (0);
	}

	num_bytes_read = read(file_desc, buffer, letters);
	if (num_bytes_read < 0)
	{
		free(buffer);
		return (0);
	}

	num_bytes_write = write(STDOUT_FILENO, buffer, num_bytes_read);
	free(buffer);
	close(file_desc);
	if (num_bytes_write < 0)
		return (0);
	return (num_bytes_write);
}
