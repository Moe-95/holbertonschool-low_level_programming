#include "main.h"
/**
*rev_string - reverse a String.
*
*@s: Pointer to string.
*/
void rev_string(char *s)
{
int i = 0, a = 0;
char temp;
while (s[i] != '\0')
{
i++;
}
while (a < (i / 2))
{
temp = s[(i - 1) - a];
s[(i - 1) - a] = s[a];
s[a] = temp;
a++;
}
}
