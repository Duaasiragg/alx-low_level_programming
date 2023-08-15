#include "main.h"
/**
 * print alphabet - print alphabet
 * Description: 'print alphabet'
 * Return: print alphabet
 */
void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
