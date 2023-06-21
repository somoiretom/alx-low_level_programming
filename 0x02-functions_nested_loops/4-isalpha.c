#include "main"
/**
 * _isalpha - function to check ALX Projects
 *
 * @c: a c int argument
 * Return: returns int 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
