/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_arraylen.c                                      :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:03:41 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 20:12:33 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

/* #include "libsf.h" */
#include <stddef.h>

size_t	sf_arraylen(char *array[])
{
	size_t	count;

	while (array[count])
	{
		count++;
	}
	return (count);
}
