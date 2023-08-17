#include <stdio.h>

/**
 * main - entry point
 * Description: 'check numbers and prints fizzbuzz'
 * Return: (0)
 */

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");

else if (num % 3 == 0)
printf("fizz");

else if (num % 5 == 0)
printf("Buzz");

else
printf("%d", num);

if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
