#include "main.h"

/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/
int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}


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
ssize_t nletters;
int file;

if (!filename)
{
return (1);
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}
if (text_content)
{
nletters = write(file, text_content, _strlen(text_content));
if (nletters == -1)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
