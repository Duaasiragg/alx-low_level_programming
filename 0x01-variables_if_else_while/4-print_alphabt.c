#include <stdio.h>
/**
 *main - entry point
 *Description: 'print alphabet lowercase except e and q'
 *Return: always 0
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
	continue;
putchar(n);
n++;
}
putchar('\n');
return (0);
}
