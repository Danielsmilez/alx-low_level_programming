#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: the integer it accepts
 *
 * Description: computes the absolute value of an integer
 *
 * Return: int
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	if (n > 0)
		return (n);
	else
		return (n);
}
