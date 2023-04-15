/**
 * sqrt_finder - a function that returns the natural square root of a num
 *
 * @n: the number
 * @sqrt_of_n: the assume sqrt of n
 *
 * Return: return the square root or -1 for num without natural sqrt
 */

int sqrt_finder(int n, int sqrt_of_n)
{
	if (sqrt_of_n * sqrt_of_n > n)
		return (-1);
	else if (sqrt_of_n * sqrt_of_n == n)
		return (sqrt_of_n);
	else
		return (sqrt_finder(n, sqrt_of_n + 1));
}

/**
 *  _sqrt_recursion - a function that returns the natural square root of a num
 *  @n: the number
 *  Return: return the square root or -1 for num without natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_finder(n, 1));
}
