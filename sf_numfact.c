/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   sf_numfact.c                                       :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:01 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 20:34:02 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"

int	sf_numfact(const int num)
{
	int	factorial;
	int	result;

	if (num < 0)
	{
		return (-1);
	}
	result = 1;
	factorial = num;
	while (factorial > 0)
	{
		result = result * factorial;
		factorial--;
	}
	return (result);
}
