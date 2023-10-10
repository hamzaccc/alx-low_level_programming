#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *	the alphabet a - z
 *	Return: 0 (success)
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
