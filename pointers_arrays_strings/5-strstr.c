#include "main.h"
/**
*_strstr -Locates a substring.
*
*@haystack: Pointer to string haystack.
*@needle: Pointer to string needle.
*Return: NULL.
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, c = 0;
while (haystack[i] != '\0')
{
j = 0;
while (needle[j + c] != '\0' && haystack[i + c] != '\0'
&& needle[j + c] == haystack[i + c])
{
if (haystack[i + c] != needle[j + c])
break;
c++;
}
if (needle[j + c] == '\0')
return (&haystack[i]);
j++;
i++;
}
return (NULL);
}
