#include <stdio.h>

/**
 * main - This code prints letters between a to f and numbers between 0 to 9.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
	putchar(i);
}
for (i = 97; i < 103; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
