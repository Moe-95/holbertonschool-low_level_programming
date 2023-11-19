#include <stdarg.h>
/**
* sum_them_all - sums all arguments passed
*
* @n: number of arguments
*
* Return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list list;
va_start(list, n);
while (i < n)
{
sum += va_arg(list, int);
i++;
}
va_end(list);
return (sum);
}
