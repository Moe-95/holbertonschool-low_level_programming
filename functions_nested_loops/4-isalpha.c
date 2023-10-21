#include "main.h"
/**
* _isalpha - Checks if Charachter is a letter.
*@c: Character to be checked.
*
*Return: 1 or 0.
*/
int _isalpha(int c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
