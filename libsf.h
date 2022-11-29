/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   libsf.h                                            :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:04:28 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 21:56:10 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSF_H
# define LIBSF_H

/* Headers ****************************************************************** */

# include <unistd.h>
# include <stdlib.h>

/* Array Functions ********************************************************** */

/* returns the amount of a specific value in an array                         */
size_t	sf_arrayfreq(char *array[], char *str);

/* return array size - len                                                    */
size_t	sf_arraylen(char *array[]);

/* returns the position of a specific value in the array                      */
int	sf_arraystr(char *array[], char *str);

/* Number Functions  ******************************************************** */

/* return an address of an array pointer with the digits of num               */
void	*sf_numarray(unsigned int num);

/* returns the factorial of a number                                          */
int	sf_numfact(const int num);

/* String Functions ********************************************************* */

/* returns the amount of a specific value in a string                         */
size_t	sf_strfreq(unsigned char *str, size_t val);

/* returns the position of a specific value in the string                     */
size_t	sf_strchar(char *array[], char *str);

/* return a pointer of string sent without the whitespace                     */
void	*sf_strstrip(const char *arry);

#endif
