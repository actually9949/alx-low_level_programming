#include "main.h"

/**
 * _strlen_recursion - a function that prints  a string in reverse
 
 strlen_recursion*
 * @s: the string pointer
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
