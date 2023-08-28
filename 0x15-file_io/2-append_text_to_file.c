#include "main.h"

/**
 * append_text_to_file - Ajouter du texte à la fin du fichier.
 * @filename: un ptr sur le nom du fichier.
 * @text_content: la chaine a ajouté à la fin du fichier.
 *
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int ouvrir, ecrire, taille = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (taille = 0; text_content[taille];)
taille++;
}

ouvrir = open(filename, O_WRONLY | O_APPEND);
ecrire = write(ouvrir, text_content, taille);

if (ouvrir == -1 || ecrire == -1)
return (-1);
close(ouvrir);
return (1);
}
