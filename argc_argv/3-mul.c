#include<stdio.h>
#include<stdlib.h>
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
int a, b;
if (argc != 3)
{
printf("Error\n");
return (-1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a * b);
}
return (0);
}
