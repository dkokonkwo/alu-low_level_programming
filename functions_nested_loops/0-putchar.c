int _putchar(char c);
/**
 * main - comment
 *
 * Return: Always 0 (Success)
 */
char word[8];
int a = 0;

int main(void)
{
word = "_putchar";
while (a < 8)
{
_putchar(word[a]);
a++;
}
_putchar('\n');
return (0);
}
