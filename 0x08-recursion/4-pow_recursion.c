#include "main.h"
/**
 * _pow_recursion - an integer raised to another
 * @x: the first integer
 * @y: the second integer
 * Return: result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, (y - 1)));
}
