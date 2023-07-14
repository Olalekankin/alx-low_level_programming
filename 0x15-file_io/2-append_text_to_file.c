#include "main.h"

/**
 * append_text_to_file - This append text to a file at the end.
 * @filename: The file name pointer.
 * @text_content: Specify the string to be added to the files ending.
 *
 * Return: If the filename is NULL or the function fails - -1.
 *         In case file do not exist the user dont have write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
