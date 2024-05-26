#include <unistd.h>
/**
 * main - prints out string
 *
 * Return: 1 (Success)
 */

int main(void)
{
char message[] = "and that piece of art is useful\
\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, sizeof(message) - 1);
return (1);
}
