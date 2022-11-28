/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   libsf.h                                            :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:28 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:47:35 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSF_H
# define LIBSF_H

/* Headers ****************************************************************** */

# include <unistd.h>
# include <stdlib.h>

/* Library Prototype ******************************************************** */

size_t	sf_arrayfreq(char *array[], char *str);
int	sf_arrayindex(char *array[], char *str);
size_t	sf_arraylen(char *array[]);
void	*sf_numarray(unsigned int num);
int	sf_factorial(const int num);
size_t	sf_strfreq(unsigned char *str, size_t val);
size_t	sf_strindex(char *array[], char *str);
void	*sf_strstrip(const char *arry);

#endif
