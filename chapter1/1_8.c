#include <stdio.h>

main()
{
	int nt = 0, nb = 0, nl = 0;
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			++nt;
		if (c == ' ')
			++nb;
		if (c == '\n')
			++nl;
	}
	printf("----------------\n");
	printf("Number of tab: %d\n", nt);
	printf("Number of blank: %d\n", nb);
	printf("Number of line: %d\n", nl);
}
