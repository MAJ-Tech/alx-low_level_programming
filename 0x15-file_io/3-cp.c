#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

ssize_t close_file(ssize_t descriptor);
/**
 * main - Entry point of the programme.
 * @arc: Arguments count (number of arguments passed).
 * @arv: Arguments vector (array of the number of arguments passed).
 * Return: Always 1 (Success).
 */
int main(int arc, char *arv[])
{
	ssize_t file_desc_read, file_desc_write, num_bytes_read, num_bytes_write;
	int reading_error = -1;
	char buffer[BUFFER_SIZE];

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_desc_read = open(arv[1], O_RDONLY);
	if (file_desc_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		close_file(file_desc_read);
		exit(98);
	}
	file_desc_write = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR| \
			       S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_desc_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		close_file(file_desc_write);
		close_file(file_desc_read);
		exit(99);
	}

	while ((num_bytes_read = read(file_desc_read, buffer, BUFFER_SIZE)) > 0)
	{
		reading_error = 1;
		num_bytes_write = write(file_desc_write, buffer, BUFFER_SIZE);
		if (num_bytes_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
			close_file(file_desc_read);
			close_file(file_desc_write);
			exit(99);
		}
	}
	if (reading_error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		close_file(file_desc_read);
		close_file(file_desc_write);
		exit(98);
	}
	return (0);
}
/**
 * close_file - close a descriptor returned by opening a file.
 * @descriptor: The file to close.
 * Return: type of error generated.
 */
ssize_t close_file(ssize_t descriptor)
{
	ssize_t error = close(descriptor);

	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)descriptor);
	return (error);
}
