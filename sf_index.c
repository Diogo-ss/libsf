/* ************************************************************************** */
/*                                                                            */
/*                                               ::::::::   :::::::           */
/*   sf_index.c  	                             :+:    :+:   :+:             */
/*                                               +:+    +:+   +:+             */
/*   By: Diogo-ss <diogo-ss@mail.com>            +#+    +:+   +#+             */
/*                                               +#+    +#+   +#+             */
/*   Created: 2022/11/27 19:04:18 by Diogo-ss    #+#    #+#   #+#             */
/*   Updated: 2022/11/27 19:04:18 by Diogo-ss    ########   #######           */
/*                                                                            */
/* ************************************************************************** */

int	sf_index(const void *array[], const void *str, const int len)
{
	int	index;

	index = 0;
	while (index < len)
	{
		if (array[index] == str)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
