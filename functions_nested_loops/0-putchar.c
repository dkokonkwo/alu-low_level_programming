int _putchar(char c);
/**
 * main - comment
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
char word[] = "_putchar";
while (a < 8)
{
_putchar(word[a]);
a++;
}
_putchar('\n');
return (0);
}
