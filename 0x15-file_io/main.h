#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

char *creer_tampon(char *fichier);
void fermer_fichier(int filedesc);

void afficher_class(unsigned char *e_ident);
void fermer_elf(int elf);
void afficher_donnees(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void afficher_v(unsigned char *e_ident);
void afficher_abi(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void verifier_elf(unsigned char *e_ident);
void afficher_entree(unsigned long int e_entry, unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);

#endif /*MAIN_H*/
