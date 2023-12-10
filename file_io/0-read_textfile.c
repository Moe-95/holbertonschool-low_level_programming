#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 * 0 if the file can't be opened or read, or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);

int file_descriptor = open(filename, O_RDONLY);

if (file_descriptor == -1)
return (0);

char *buffer = malloc(sizeof(char) * letters);

if (buffer == NULL)
{
close(file_descriptor);
return (0);
}

ssize_t bytes_read = read(file_descriptor, buffer, letters);
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(file_descriptor);

if (bytes_read == -1 || bytes_written == -1 || bytes_read != bytes_written)
return (0);

return (bytes_read);
}
