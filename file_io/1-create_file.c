#include "main.h"

/**
 * create_file - createa new text file
 * @filname: name of new file
 * @text_content: text to add to file
 *
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
int file, size, i = 0;
if (filename == NULL)
{
return (-1);
}

file = open(filename | O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}

while (text_content[i])
{
i++;
}
size = write(file, text_content, i);
if (size < 0)
{
return (-1);
}
if (close(file) < 0)
{
return (-1);
}
return (1);
}
