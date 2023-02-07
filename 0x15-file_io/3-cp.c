#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cp;
	int vchars;
	int rwr;

	if (!filename)
		return (-1);

	cp = open(filename, O_WRONLY | O_APPEND);

	if (cp == -1)
		return (-1);

	if (text_content)
	{
		for (vchars = 0; text_content[vchars]; vchars++)
			;

		rwr = write(cp, text_content, vchars);

		if (rwr == -1)
			return (-1);
	}

	close(cp);

	return (1);
}
