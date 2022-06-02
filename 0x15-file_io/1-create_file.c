#include "main.h"

/**
 * create_file - function that creates a file.
 * where filename is the name of the file to create and
 * text_content is a NULL terminated string to write to the file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 *  if text_content is NULL create an empty file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}

int fd;

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
{
return (-1);
}

if (text_content)
{
int i, readStatus;

for (i = 0; text_content[i] != '\0'; i++)
	;
readStatus = write(fd, text_content, i);
if (readStatus == -1)
{
return (-1);
}
}
close(fd);
return (1);
}
