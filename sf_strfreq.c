#include <stddef.h>

size_t sf_strfreq(unsigned char *str, size_t val)
{
	size_t count;
	size_t frequency;

	count = 0;
	frequency = 0;
	while (str[count]) 
	{
		if (str[count] == val)
		{
			frequency++;
		}
		count++;
	}

	return (frequency);
}
