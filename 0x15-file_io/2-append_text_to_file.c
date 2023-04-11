#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: file to be created.
 * @text_content: The content to write to the created file.
 * Return: 1 (Success) -1 (Failure).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, num_bytes_write, _str_len = 0;
	char *str = text_content;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_RDWR | O_APPEND);
	if (file_desc < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}

	while (str && *str++)
		_str_len++;

	num_bytes_write = write(file_desc, text_content, _str_len);
	close(file_desc);

	if (num_bytes_write < 0)
		return (-1);
	return (1);
}
