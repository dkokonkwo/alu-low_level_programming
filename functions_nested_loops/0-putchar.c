int _putchar(char c);
/**
 * main - comment
 *
 * Return: Always 0 (Success)
 */
char word[] = "_putchar";
int a = 0;

int main(void)
{
while (a < 8)
{
_putchar(word[a]);
a++;
}
_putchar('\n');
return (0);
}
