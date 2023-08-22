#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: the string to get the length of
 * Return: the length of @s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
