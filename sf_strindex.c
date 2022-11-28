/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_strindex.c                                      :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:16 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:04:17 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

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
