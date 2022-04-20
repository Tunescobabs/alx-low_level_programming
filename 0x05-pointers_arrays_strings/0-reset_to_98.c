#include "main.h"

/**
 * reset_to_98 - reset argument to 98
 * @n: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{

	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
