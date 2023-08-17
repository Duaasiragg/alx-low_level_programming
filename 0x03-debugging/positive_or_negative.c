#include "main.h"
/**
 * positive_or_negative - check numbers
 *
 * Description: 'check the numbers if positive or not'
 * @i: the integer
 * Return: (0)
 *
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is 0\n", i);
	else
		printf("%d is negative\n", i);
}
