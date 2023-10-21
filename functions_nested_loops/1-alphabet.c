#include "main.h"
/**
*print_alphabet - Print the alphabet.
*
*Return: ALways 0.
*/
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
if (i == 122)
_putchar('\n');
i++;
}
}
