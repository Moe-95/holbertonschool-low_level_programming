#include "main.h"
/**
*is_prime_number - find prime numbers using recursion.
*@n: Number to check if prime
*
*Return: 1 if Prime 0 Otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (prime(n, n - 1));
}
/**
*prime - Find the divisors of a number.
*
*@x: Numerator.
*@y: Denominator.
*
*Return: 1 if Prime 0 Otherwise.
*/
int prime(int x, int y)
{
if (y == 1)
return (1);
else if (x % y == 0)
return (0);
else
return (prime(x, y - 1));
}
