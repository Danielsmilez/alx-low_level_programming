#include "main.h"



/**

 * more_numbers - prints numbers

 * Return:0

*/

void more_numbers(void)

{

	int i, j;



	for (i = 0; i < 10; i++)

	{

		for (j = 0; j <= 14; j++)

		{

			if (j > 9)

				_putchar((j / 10) + 48);

			_putchar((j % 10) + 48);

		}

		_putchar('\n');

	}

}
