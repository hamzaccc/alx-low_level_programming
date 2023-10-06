#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: The last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	if (digit > 5)
		printf("%iand is greater than 5\n", digit);
	else if (digit == 0)
		printf("%iand is 0\n", digit);
	else if (digit < 6 && digit != 0)
		printf("%iand is less than 6 and not 0\n", digit);
	return (0);
}
