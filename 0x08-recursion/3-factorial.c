#include "main.h"

/**
 * factorial - function that prints the factorial
 * @n: the integer
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
