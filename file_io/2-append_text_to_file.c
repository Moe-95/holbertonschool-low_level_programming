#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written;
mode_t permissions = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND, permissions);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(file_descriptor, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);
return (1);
}
