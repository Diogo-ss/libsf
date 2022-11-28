#include <stdio.h>
/* #include "libsf.h" */
#include "sf_strindex.c"
/* #include "sf_charfreq.c" */
#include <stddef.h>
#include "sf_arraylen.c"

int main()
{
	char *nomes[] = {"danilo", "diogo", "\200", "dd"};
	/* int x = sf_strfreq(nomes, "danilo"); */
	char *nomess = "sssdfgg";

	int y = sf_arraylen(nomes);
	printf("%d \n", y);
	return 0;
}
