#include<stdio.h>
#include "main.h"
/**
*main - Double 2 arguments.
*
*@argc: Numbers of arguments.
*@argv: command line array.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (-1);
}
else
{
printf("%d\n", ((argv[0] -'0') * (argv[1] - '0'));
}
return (0);
}
