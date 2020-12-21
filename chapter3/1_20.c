#include <stdio.h>

#define TAB_LENGTH 8

int main()
{
	int i, c, remainder;

	for (i=0; (c=getchar())!=EOF; ++i)
	{
		if (c == '\n')
			i = -1;
		else
			if (c == '\t')
			{
				remainder = i%TAB_LENGTH;
				for (int j=0; j<(TAB_LENGTH-remainder); ++j)
					putchar(' ');
				i = i + (TAB_LENGTH-remainder-1);
			}
			else
				putchar(c);
	}

	return 0;
}

/* ----------notes----------- */
// 1. be careful with the iteration of ++i and i++ in for loop --> this addition (or subtraction) is conducted after one loop 
//    --> if you set i=0 in the loop, then you will get i=1 at the beginning of next loop!
//
// 2. in this system, 1 tab length = 8 space length --> the tab stop is already decided at 0,8,16,... 
//    --> for example, if you input 3 letters and a tab from the begin of the line, there are (8-3) spaces in order to reach the next tab stop, and so forth
