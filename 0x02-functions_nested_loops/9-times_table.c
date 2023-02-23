#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @i, @result: variable
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int result = i * 9;

		if (result > 9)
		{
			_putchar(result / 10 + '0');
		}
		_putchar(result % 10 + '0');
		_putchar('\n');
	}
}
