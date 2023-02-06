#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: To be added at the end of the file
 *
 * Return: 1 if the file exists, or -1 if doesn't exist or permission denied
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	FILE *file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	int result = fputs(text_content, file);

	fclose(file);

	return ((result >= 0) ? 1 : -1);
}

