#include "main.h"
/**
*factorial - calculate the factorial using recursion.
*
*@n: Number to be calculated.
*
*Return: factorial of n.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
