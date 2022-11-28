/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   libsf.h                                            :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:28 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:04:32 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSF_H
# define LIBSF_H

/* Headers ****************************************************************** */

# include <unistd.h>
# include <stdlib.h>

/* Library Prototype ******************************************************** */

int	sf_index(const void *array[], const char *str, const int len);
int	sf_factorial(const int num);
size_t sf_arraylen(char *array[]);

#endif

/* nota 
 *tornar o sf_arraylen const void *array
 */

