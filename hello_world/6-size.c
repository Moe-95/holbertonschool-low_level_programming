#include <stdio.h>
/**
* main - Entry point
*
* Description: This function prints the size of various data types.
*
* Return: Always 0 (success)
*/
int main(void)
{
/* Print the sizeof a char */
printf("Size of a char: %ld byte(s)\n", sizeof(char));
/* Print the sizeof an int */
printf("Size of an int: %ld byte(s)\n", sizeof(int));
/* Print the sizeof a long int */
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
/* Print the sizeof a long long int */
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
/* Print the sizeof a float */
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}

