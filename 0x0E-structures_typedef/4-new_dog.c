#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets a length of a string
 * @s: the string to get the length
 * Return: the length of the @s
 */
int _strlen(char *s)
{

int i;
i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * *_strcpy - a function that return @dest with a copy of a string from @src
 * @dest: copy string to here
 * @src: string to copy
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{

int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}

_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
