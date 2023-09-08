#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0
 */
int main(void)
{
/** Print lowercase alphabet excluding 'q' and 'e'*/
	for (char c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' && c != 'e')
	putchar(c);
}

/** Print a newline */
	putchar('\n');
	return (0);
}
