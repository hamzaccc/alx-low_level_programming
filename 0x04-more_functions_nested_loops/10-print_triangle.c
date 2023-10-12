#include "main.h"

/**
 * print_triangle - prints a tringle
 *
 * @size: size of the triangle
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int hgt, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hgt + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
