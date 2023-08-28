#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: the name of file we want to read
 * @letters: is the number of letters it should read and print
 *
 * Return:0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file_desc;
ssize_t textRead;
ssize_t textWrite;
char *tampon = malloc(sizeof(char) * letters);

file_desc = open(filename, O_RDONLY);
if (file_desc == -1)
return (0);
textRead = read(file_desc, tampon, letters);
textWrite = write(STDOUT_FILENO, tampon, textRead);
free(tampon);
close(file_desc);
return (textWrite);
}
