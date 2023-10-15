#include <stdio.h>
/* Calculates and prints sizes of data types in bytes */
int main(void)
{
/* Print the sizeof a char */
printf("Size of a char: %ldbyte(s)\n", sizeof(char));
/* Print the sizeof an int */
printf("Size of an int: %ldbyte(s)\n", sizeof(int));
/* Print the sizeof a long int */
printf("Size of along int: %ldbyte(s)\n", sizeof(long));
/* Print the sizeof a long long int */
printf("Size of a long long int: %ldbyte(s)\n", sizeof(long long));
/* Print the sizeof a float */
printf("Size of a float: %ldbyte(s)\n", sizeof(float));
return (0);
}

