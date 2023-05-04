#include "main.h"
/**
 * set_bit - sets a bit
 * @n: integer to grab 
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f;
	
	if (index > 63)
		return (-1);
	f = 1 << index;
	*n = (*n | f);
	
	return (1);
}
