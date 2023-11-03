#include<stdio.h>
#include "main.h"
/**
*main - Prints the number of commands.
*
*@argc: Numbers of command line.
*@argv: command line array.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%d\n", argc);
return (0);
}
