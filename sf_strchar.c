/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_strchar.c                                       :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:16 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 21:55:03 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"

size_t	sf_strchar(char *array[], char *str)
{
	size_t	count;

	count = 0;
	while (array[count])
	{
		if (array[count] == str)
		{
			return (count);
		}
		count++;
	}
	return (-1);
}
