#include <stdio.h>
/**
*print_name - Prints a name.
*
*@name: name to print.
*@f: function used.
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
(*f)(name);
}
