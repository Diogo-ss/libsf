/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   main.c                                             :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:05:07 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:05:08 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* #include "libsf.h" */
/* #include "sf_strindex.c" */
/* #include "sf_charfreq.c" */
#include <stddef.h>
#include "sf_arraylen.c"
#include "sf_factorial.c"
#include "sf_arrayindex.c"
#include "sf_strfreq.c"
#include "sf_arrayfreq.c"
 
 

int test()
{
	return (40 | 30);
}

int main()
{
	char *nomes[] = {"danilo", "diogo", "\200", "dd"};
	/* int x = sf_strfreq(nomes, "danilo"); */
	char *nomess = "diogo";

	int y = sf_arrayfreq(nomes, "diogo");
	printf("%d \n", y);
	return 0;
}
