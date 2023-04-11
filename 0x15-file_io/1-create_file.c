#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - A function that creates a file.
 * @filename: file to be created.
 * @text_content: The content to write to the created file.
 * Return: 1 (Success) -1 (Failure).
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, num_bytes_write, _str_len = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_desc < 0)
		return (-1);
	while (text_content && *(text_content + _str_len))
		_str_len++;

	num_bytes_write = write(file_desc, text_content, _str_len);
	close(file_desc);

	if (num_bytes_write < 0)
		return (-1);
	return (1);
}
