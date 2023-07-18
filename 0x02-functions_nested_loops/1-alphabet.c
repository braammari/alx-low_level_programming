#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
/**
 *print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch = 'a'
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
}
