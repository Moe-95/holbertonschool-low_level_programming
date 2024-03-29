#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints integer arguments with a separator
*
* @separator: - thing to print between numbers
* @n: - number of arguments
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *sep;
unsigned int i = 1;
va_list list;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%d", va_arg(list, int));
while (i < n)
{
printf("%s%d", sep, va_arg(list, int));
i++;
}
printf("\n");
va_end(list);
}
