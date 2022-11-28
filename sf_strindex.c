#include <stddef.h>
size_t sf_strindex(char *array[], char *str)
{
	unsigned char *l_array;
	unsigned char *l_str;
	size_t count;

	l_array = (unsigned char *) array;
	l_str = (unsigned char *) str;


	count = 0;
	while ((array[count]))
	{
		if (array[count] == str)
		{
			return (count);
		}
		count++;
	}
	return (-1);
}
