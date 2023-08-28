#include "main.h"

/**
 * create_file - Créer un fichier.
 * @filename: Un pointeur sur le nom du fichier que nous voulons créer
 * @text_content: Un ptr sur la chaine à ecrire dans le fichier
 *
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
int file_desc, textWrite, lenth = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenth = 0; text_content[lenth];)
lenth++;
}
file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
textWrite = write(file_desc, text_content, lenth);
if (file_desc == -1 || textWrite == -1)
return (-1);
close(file_desc);
return (1);
}
