#include <stdio.h>

/* count lines in input */
main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')	// character in single quotes represents an integer value of ascii --> character constant
			++nl;
	printf("%d\n", nl);
}

