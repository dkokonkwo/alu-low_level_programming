#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - prints letters from a text file
 * @filename: input text file
 * @letters: number of letters
 *
 * Return: 0 if file not opened/read else num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t sz1, sz2;
int file;
char *ch = malloc(sizeof(char) * letters);

if (filename == NULL || ch == NULL)
{
free(ch);
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
free(ch);
return (0);
}
sz1 = read(file, ch, letters);
if (sz1 == -1)
{
free(ch);
close(file);
return (0);
}
ch[sz1] = '\0';
sz2 = write(STDOUT_FILENO, ch, sz1);
free(ch);
if (close(file) < 0)
{
return (0);
}
return (sz2);
}
