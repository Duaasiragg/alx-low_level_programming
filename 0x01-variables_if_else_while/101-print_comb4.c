#include <stdio.h>
/**
 *main - entry point
 *Description: 'print numbers'
 *Return: always 0
 */
int main(void)
{
int d, p, q;
for (d = '0'; d < '9'; d++)
{
for (p = d + 1; q <= '9'; p++)
{
for (q = p + 1; q <= '9'; q++)
{
if (q > p && p > d)
{
putchar(d);
putchar(p);
putchar(q);
if (d != '7' || p != '8')
{
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}