#include "main.h"

/**
 * _strlen_recursion - a function that prints  a string in reverse
 *
 * @s: the string pointer
 100p
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * palindrome_helper - eveluate the string
 *
 * @str: the string
 * @len: the number of char in the string
 * @idx: the index of the string
 *
 * Return: 1 for a palindrome, otherwise 0
 */

int palindrome_helper(char *str, int len, int idx)
{
	if (idx < len && str[idx] == str[len])
		return (palindrome_helper(str, len - 1, idx + 1));
	if (str[idx] != str[len])
		return (0);
	return (1);
}

/**
 * is_palindrome - check if a given string is a palindrome
 *
 * @s: the given string
 *
 * Return: 1 if it's a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s) - 1;
	int idx = 0;

	return (palindrome_helper(s, length, idx));
}
