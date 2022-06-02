#include "main.h"


/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
if (text_content == NULL)
{
return (1);
}
if (filename == NULL)
{
return (-1);
}

int fd, status, i;

fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
{
return (-1);
}

for (i = 0; text_content[i] != '\0'; i++)
	;
status = write(fd, text_content, i);
if (status == -1)
{
return (-1);
}

close(fd);
return (1);
}
