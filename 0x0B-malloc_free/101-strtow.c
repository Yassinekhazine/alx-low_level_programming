#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string
 * @str: The string to be searched
 * Return: The index marking the end of the initial word pointed to by str
 */

int word_len(char *str)
{

int i = 0, len = 0;

while (*(str + i) && *(str + i) != ' ')
{
len++;
i++;
}

return (len);
}

/**
 * count_words - Helper function to count the number of words in a string
 * @str: string to evaluate
 * Return: number of words
 */

int count_words(char *str)
{
int i = 0, w = 0, len = 0;

for (i = 0; *(str + i); i++)
len++;

for (i = 0; i < len; i++)
{
if (*(str + i) != ' ')
{
w++;
ix += word_len(str + i);
}
}
return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{

char **strings;
int i = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);

strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[i] == ' ')
i++;

letters = word_len(str + i);

strings[w] = malloc(sizeof(char) * (letters + 1));

if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);

free(strings);
return (NULL);
}

for (l = 0; l < letters; l++)
strings[w][l] = str[i++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
