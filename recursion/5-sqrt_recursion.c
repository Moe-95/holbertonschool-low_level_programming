#include "main.h"
/**
*prime - Divide x over y.
*
*@x: Numerator.
*@y: Denominator.
*
*Return: x divide by y.
*/
int prime(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y < x)
return (prime(x, y + 1));
else
return (-1);
}
/**
*_sqrt_recursion - find sqrt of a numbers using recursion.
*@n: Number to check sqrt of.
*
*Return: sqrt of a number.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (prime(n, 2));
}
