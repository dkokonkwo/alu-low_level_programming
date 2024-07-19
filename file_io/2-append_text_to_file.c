#include "main.h"

/**
 * append_text_to_file - fxn appends text to file
 * @filename: name of file
 * @text_content: text to add to file
 *
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file, i = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_RDWR | O_APPEND);
if (file == -1)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}

while(text_content[i])
{
i++;
}
write(file, text_content, i);

if (close(file) < 0)
{
return (-1);
}
return (1);
}
