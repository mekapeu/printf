#include "holberton.h"
/**
  * print_binary - converts an unsigned int to binary.
  * @n: unsigned int to be converted.
  * @len: length of characters printd.
  *
  * Return: length.
  */
int print_binary(int n, int len)
{
	if ((n / 2) != 0)
	{
		print_binary(n / 2, len);
	}

	len += _putchar((n % 2) + '0');

	return (len);
}

/**
  * print_unsigned - Recursive function for printing binary format of number
  * @args: The list of arguments
  * @len: The current lenght of the string
  *
  * Return: The new length of the string
  */

int print_unsigned(va_list args, int len)
{
	int n;

	n = va_arg(args, int);
	if (n < 0)
		return (len);
	return (print_binary(n, len));
}
