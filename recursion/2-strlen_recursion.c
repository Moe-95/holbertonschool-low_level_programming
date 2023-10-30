#include "main.h"
/**
*_strlen_recursion - count string chars using recursion.
*
*@s: String to be counted.
*
*Return: Nb of chars.
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
return (_strlen_recursion(s + 1) + 1);
}
