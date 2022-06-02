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
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t nletters;
int file;

if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_APPEND);
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
