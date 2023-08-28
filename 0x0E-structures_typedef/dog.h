#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the struct
 *@name: var 1
 *@age: var 2
 *@owner: var 3
 */

struct dog
{
char *name;
float age;
char *owner;
};

/* Additional function prototypes */

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
