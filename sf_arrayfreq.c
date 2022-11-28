#include <stddef.h>

size_t sf_arrayfreq(char *array[], char *str)
{
	size_t count;
	size_t frequency;

	count = 0;
	frequency = 0;
	while (array[count])
		{
			if (array[count] == str)
			{
				frequency++;
			}
			count++;
	}
	return (frequency);
}
