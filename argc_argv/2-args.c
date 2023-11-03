#include<stdio.h>
#include "main.h"
/**
*main - Prints all arguments.
*
*@argc: Numbers of command line.
*@argv: command line array.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
