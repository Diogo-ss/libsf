/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_arrayindex.c                                    :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:03:29 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:51:20 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"

int	sf_arrayindex(char *array[], char *str)
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

/* size_t 	sf_arrayyindex(unsigned char *array[],unsigned char *str) */
/* { */
/* 	unsigned char *l_array; */
/* 	unsigned char *l_str; */
/* 	size_t count; */

/* 	l_array = (unsigned char *) array; */
/* 	l_str = (unsigned char *) str; */

/* 	count = 0; */
/* 	while ((array[count])) */
/* 	{ */
/* 		if (array[count] == str) */
/* 		{ */
/* 			return (count); */
/* 		} */
/* 		count++; */
/* 	} */
/* 	return (-1); */
/* } */
