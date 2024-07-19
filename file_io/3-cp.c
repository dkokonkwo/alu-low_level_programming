#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define STDERR STDERR_FILENO

void cannot_read(char *s);
void cannot_write(char *s);
void cannot_close(int f);

/**
 * main - copies content from one file to another
 * @argc: number of arguments
 * @argv: argument list
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int f1, f2;
ssize_t s1, s2;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

f1 = open(argv[1], O_RDONLY);
if (f1 < 0)
{
cannot_read(argv[1]);
}

f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (f2 < 0)
{
cannot_write(argv[2]);
}

s1 = read(f1, buff, 1024);
if (s1 < 0)
{
cannot_read(argv[1]);
}
s2 = write(f2, buff, s1);
if (s2 < 0)
{
cannot_write(argv[2]);
}

while (s1 == 1024)
{
s1 = read(f1, buff, 1024);
if (s1 < 0)
{
cannot_read(argv[1]);
}
s2 = write(f2, buff, s1);
if (s2 < 0)
{
cannot_write(argv[2]);
}
}

if (close(f1) < 0)
{
cannot_close(f1);
}
if (close(f2) < 0)
{
cannot_close(f2);
}

return (0);
}

/**
 * cannot_read - cant read file content error
 * @s: filename
 */

void cannot_read(char *s)
{
dprintf(STDERR, "Error: Can't read from file %s\n", s);
exit(98);
}

/**
 * cannot_write - cant write file content error
 * @s: filename
 */

void cannot_write(char *s)
{
dprintf(STDERR, "Error: Can't write to %s\n", s);
exit(99);
}

/**
 * cannot_close - cant close file error
 * @f: value of file
 */

void cannot_close(int f)
{
dprintf(STDERR, "Error: Can't close fd %d\n", f);
exit(100);
}

