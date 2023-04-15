/**
 * is_prime_helper - evaluate if a number is a screen
 *
 * @num: the number to check
 * @s: number to use for evaluation
 *
 * Return: 0 or 1
 */

int is_prime_helper(int num, int s)
{
	if (s * s > num)
		return (1);
	if (num % s == 0)
		return (0);
	return (is_prime_helper(num, s + 1));
}

/**
 * is_prime_number - this is a function that check if a number is a prime number
 *
 * @n: the number
 *
 * Return: 1 if it's a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_helper(n, 2));
}
