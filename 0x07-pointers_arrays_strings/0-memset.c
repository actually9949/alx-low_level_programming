/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: memory area pointed to b filled
 * @b: the constant byte
 * @n: the first n  bytes of the memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* loop over the memory area n time*/
	while (n--)
		s[n] = b;

	return (s);
}
