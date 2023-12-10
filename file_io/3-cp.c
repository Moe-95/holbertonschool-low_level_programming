#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_usage_error - prints usage error message and exits with code 97
 */
void print_usage_error(void)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

/**
 * print_read_error - prints read error message and exits with code 98
 * @file: the file name
 */
void print_read_error(const char *file)
{
dprintf(2, "Error: Can't read from file %s\n", file);
exit(98);
}

/**
 * print_write_error - prints write error message and exits with code 99
 * @file: the file name
 */
void print_write_error(const char *file)
{
dprintf(2, "Error: Can't write to %s\n", file);
}

/**
 * close_files - closes file descriptors and prints error message if any
 * @fd1: the first file descriptor
 * @fd2: the second file descriptor
 * Return: 0 on success, -1 on failure
 */
int close_files(int fd1, int fd2)
{
int result1, result2;

result1 = close(fd1);
result2 = close(fd2);

if (result1 == -1 || result2 == -1)
{
if (result1 == -1)
dprintf(2, "Error: Can't close fd %d\n", fd1);
if (result2 == -1)
dprintf(2, "Error: Can't close fd %d\n", fd2);
return (-1);
}

return (0);
}

/**
 * main - entry point, copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise exit status
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
print_usage_error();
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_read_error(argv[1]);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
print_write_error(argv[2]);
close(fd_from);
exit(99);
}
do {
bytes_read = read(fd_from, buffer, 1024);
if (bytes_read == -1)
{
print_read_error(argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
print_write_error(argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
} while (bytes_read == 1024);
if (close_files(fd_from, fd_to) == -1)
exit(100);
return (0);
}
