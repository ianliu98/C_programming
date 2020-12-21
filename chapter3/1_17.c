#include <stdio.h>
#define MAXLINE		1000	/* maximum input line size */
#define THRESHOLD	80

/* the name of original getline must be changed, since another getline function exits in stdio.h  */

int get_line(char line[], int maxline);

/* print longest input line */
int main()
{
	int len;	/* current line length */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > THRESHOLD)
			printf("%s", line);
	return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

