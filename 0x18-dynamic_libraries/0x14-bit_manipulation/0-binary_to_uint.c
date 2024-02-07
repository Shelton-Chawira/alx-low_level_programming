#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The converted number, or 0
 * if there are non-binary characters or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char current_char;

	if (b == NULL)
		return (0);

	while ((current_char = *b) != '\0')
	{
		if (current_char == '0' || current_char == '1')
		{
			result = (result << 1) | (current_char - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

