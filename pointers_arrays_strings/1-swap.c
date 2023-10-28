#include "main.h"
/**
*swap_int - swap the values it points to.
*
*@a: Pointer to a.
*@b: Pointer to b.
*/
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
