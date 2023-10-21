#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet 10 times.
*
*Return: Alphabets.
*/
void print_alphabet_x10(void)
{
int i = 0, j = 97;
while (i < 10)
{
j = 97;
while (j < 123)
{
_putchar(j);
if (j == 122)
_putchar('\n');
j++;
}
i++;
}

}
