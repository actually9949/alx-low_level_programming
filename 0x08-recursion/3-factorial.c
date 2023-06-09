/**
 * factorial -this is a function that returns the factorial of a given number
 *
 * @n: the number
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
