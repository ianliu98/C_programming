#include <stdio.h>

/* print the length of longest line */
/* how to initialize a dynamic length char array ??? --> it seems impossible, even with pointer */

int main()
{
	int c, len = 0, max = 0;

	while ((c=getchar()) != EOF)
	{
		++len;	
		if (c == '\n'){
			if (len > max)
				max = len;
			len = 0;
		}
	}
	printf("the longest line has %d characters.\n", max);
	return 0;
}
