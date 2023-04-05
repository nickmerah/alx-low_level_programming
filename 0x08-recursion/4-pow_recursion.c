#include "main.h"
/**
 * @a: integer to power
 * @b: power to do
 * _pow_recursion - gives power of int
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b > 0)
	{
		return (a * _pow_recursion(a, b - 1));
	}
	return (1);
}
