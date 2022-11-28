/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_strfreq.c                                       :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:08 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 20:13:58 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"

size_t	sf_strfreq(unsigned char *str, size_t val)
{
	size_t	count;
	size_t	frequency;

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
