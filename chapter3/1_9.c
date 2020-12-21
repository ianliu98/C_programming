#include <stdio.h>

main()
{
	int c1, c2 = 100;

	while ((c1 = getchar()) != EOF)
	{
		if (c1 == ' ')
		{
			if (c2 == ' ')
				;
			else
				putchar(c1);
		}
		else
			putchar(c1);
		c2 = c1;
	}
}
