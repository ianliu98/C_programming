#include <stdio.h>
#define MAXLINE		1000	/* maximum input line size */

/* the name of original getline must be changed, since another getline function exits in stdio.h  */

int get_line(char line[], int maxline);

/* print longest input line */
int main()
{
	int len, i;	/* current line length */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		for (i=len-2; i>=0 && (line[i]=='\t' || line[i]==' '); --i)
		{
			line[i] = '\n';
			line[i+1] = '\0';
		}
		if (len==1 && line[0]=='\n')
			line[0] = '\0';
		printf("%s",line);
	}
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

/* -----------notes------------ */
// length of '\0' is 0;
// string of blank line is '\n\0', thus its length is 1 and its position 0 is '\n'
// since printf(%s) is used, we need a string to output, the symbol is the '\0' at the end



