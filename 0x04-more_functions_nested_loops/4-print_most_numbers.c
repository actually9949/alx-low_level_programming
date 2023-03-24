#include "holberton.h" /* assuming the existence of this header file that includes putchar */

void print_most_numbers(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    if (i != 2 && i != 4)
    {
      _putchar(i + '0'); /* add '0' to convert integer to ASCII character */
    }
  }
  _putchar('\n'); /* print a newline character after all the numbers are printed */
}

