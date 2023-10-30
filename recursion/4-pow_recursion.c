#include "main.h"
/**
*_pow_recursion - calculate the power using recursion.
*
*@x: Number to be calculated.
*@y: Number of power.
*Return: x power y.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
