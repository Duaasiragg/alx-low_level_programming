#include <stdio.h>
/**
 * main - entry point
 * Description: 'print _putchar to stdout'
 * Return: always 0
 */
int main(void)
{
int i;
char c[] = "_putchar";
for (i = 0; i <= 7; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
