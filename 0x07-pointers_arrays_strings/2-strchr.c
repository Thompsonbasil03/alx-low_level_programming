#include "main.h"
#include <stddef.h>

/**
* _strchr -> touches a character
* @s: string given to look thru
* @c: another character we look for
* Return: a pointer to the char or NULL
*/
car *_strchr(char *s, char c)
{
if (s == NULL)
return (NULL);
for (; *s; s++)
{
if (*s == c)
return (s);
}
if (*s == c)
{
return (s);
}
return (NULL);
}
