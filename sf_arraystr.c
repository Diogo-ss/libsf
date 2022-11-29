/* ************************************************************************** */
/*                                                                            */
/*                                                   ::::::::   :::::::       */
/*   sf_arraystr.c                                   :+:    :+:   :+:         */
/*                                                   +:+    +:+   +:+         */
/*   By: Diogo-ss <diogo-ss@mail.com>                +#+    +:+   +#+         */
/*                                                   +#+    +#+   +#+         */
/*   Created: 2022/11/28 22:04:49 by Diogo-ss        #+#    #+#   #+#         */
/*   Updated: 2022/11/28 22:04:53 by Diogo-ss        ########   #######.ss    */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"

int	sf_arraystr(char *array[], char *str)
{
	int	count;

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
