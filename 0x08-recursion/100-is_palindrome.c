#include "main.h"
/**
 * length - helps do it
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helperme - helps more
 * @i: integer i
 * @s: string
 * Return: int value
 */
int helperme(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helperme(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it palindrome
 * @s: string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helperme(i, s));

}
