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
printf("%d\n", argc - 1);
(void) argv;
return (0);
}
