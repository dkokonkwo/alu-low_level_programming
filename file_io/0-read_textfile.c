#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

/**
 * read_textfile - prints letters from a text file
 * @filename: input text file
 * @letters: number of letters
 *
 * Return: 0 if file not opened/read else num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i = 0;
FILE *file;
char ch;

if (filename == NULL)
{
return (0);
}

file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}

while ((ch = fgetc(file)) != EOF && i <= letters)
{
_putchar(ch);
i++;
}

fclose(file);
return (i);
}
