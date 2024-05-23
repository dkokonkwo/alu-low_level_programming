int _putchar(char c);
/**
 * main - comment
 *
 * Return: Always 0 (Success)
 */
char word[8];
int a = 0;
word[8] = "_putchar";
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
