#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
	long nc = 0;

	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);

	return 0;
}

/* use ctrl+d to create a EOF in linux */
