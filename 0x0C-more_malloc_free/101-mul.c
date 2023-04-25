#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * error_exit - prints an error message exits with status 98
 */
void error_exit(void)
{
	char *err_msg = "Error";

	while (*err_msg != '\0')
	{
		_putchar(*err_msg);
		err_msg++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * is_digit - check if a string is made of digits
 * @str: the string to check
 *
 * Return: 1 if true, otherwise 0
 */
int is_digit(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - multiply two numbrs
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int i, num1, num2, *result, len1, len2, t_len, digit, v = 0;
	char *num1_str, *num2_str;

	num1_str = argv[1];
	num2_str = argv[2];
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		error_exit();
	len1 = strlen(num1_str);
	len2 = strlen(num2_str);
	t_len = len1 + len2 + 1;
	result = malloc(t_len * sizeof(int));
	if (result == NULL)
		error_exit();
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 =  len1 - 1; len1 >= 0; len1--)
	{
		num1 = num1_str[len1] - '0';
		digit = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			num2 = num2_str[len2] - '0';
			digit += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = digit % 10;
			digit /= 10;
		}
		if (digit > 0)
			result[len1 + len2 + 1] += digit;
	}
	for (i = 0; i < t_len - 1; i++)
	{
		if (result[i])
			v = 1;
		if (v)
			_putchar(result[i] + '0');
	}
	if (!v)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
