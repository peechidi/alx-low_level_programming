#include <stdio.h>

/**
 * main - This code prints reversed alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 122; i > 96; i--)
{
	putchar(i);
}
putchar('\n');
return (0);
}
