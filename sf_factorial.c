/* ************************************************************************** */
/*                                                                            */
/*                                               ::::::::   :::::::           */
/*   sf_factorial.c                              :+:    :+:   :+:             */
/*                                               +:+    +:+   +:+             */
/*   By: Diogo-ss <diogo-ss@mail.com>            +#+    +:+   +#+             */
/*                                               +#+    +#+   +#+             */
/*   Created: 2022/11/27 19:48:20 by Diogo-ss    #+#    #+#   #+#             */
/*   Updated: 2022/11/27 19:48:20 by Diogo-ss    ########   #######           */
/*                                                                            */
/* ************************************************************************** */

#include "libsf.h"
#include <stddef.h>
#include <stdio.h>

int	sf_factorial(const int num)
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
