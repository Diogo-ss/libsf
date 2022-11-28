/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_arrayfreq.c                                     :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:02:49 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:50:13 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	sf_arrayfreq(char *array[], char *str)
{
	size_t	count;
	size_t	frequency;

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
