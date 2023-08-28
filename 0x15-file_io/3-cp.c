#include "main.h"
#include <stdio.h>

/**
 * fic_err - verifie si on peut ouvrir le fichier.
 * @file_from: file_from.
 * @file_to: file_to.
 * @av: arguments vector.
 * Return: void.
 */
void fic_err(int file_from, int file_to, char *av[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments.
 * @av: arguments vector.
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
char tamp[1024];
int file_from, file_to, fermer_err;
ssize_t chaine, nwr;

if (ac != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(av[1], O_RDONLY);
file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
fic_err(file_from, file_to, av);

chaine = 1024;
while (chaine == 1024)
{
chaine = read(file_from, tamp, 1024);
if (chaine == -1)
fic_err(-1, 0, av);
nwr = write(file_to, tamp, chaine);
if (nwr == -1)
fic_err(0, -1, av);
}
fermer_err = close(file_from);
if (fermer_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
fermer_err = close(file_to);
if (fermer_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
