#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
*main - Sum all arguments.
*
*@argc: Numbers of arguments.
*@argv: command line array.
*
*Return: The sum a.
*/
int main(int argc, char *argv[])
{
int i = 1, a = 0, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
else
{
while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (-1);
}
j++;
}
a = a + atoi(argv[i]);
i++;
}
printf("%d\n", a);
return (a);
}
return (0);
}
