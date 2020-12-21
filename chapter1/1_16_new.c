#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE	3

/* for short lines(less than 25 chracters I guess) this program works well --> something wrong with realloc, what is that?? */

int get_line(char *line);
void copy(char *longest, char *line);

/* print longest input line */
int main()
{
	int len;	/* current line length */
	int max;	/* maximum length seen so far */
	char *line;	/* current input line */
	char *longest;	/* longest line saved here */

	line = malloc(sizeof(char) * INITIAL_SIZE);
	max = 0;

	while ((len = get_line(line)) > 0)
		if (len > max) {
			max = len;
			printf("%s\n",line);
			longest = malloc(sizeof(char)*max);
			longest = line;
		}
	if (max > 0)	/* there was a line */
		printf("The longest line is:\n%s\n", longest);
	return 0;
}

/* getline: read a line into s, return length */
int get_line(char *s)
{
	int c, i;

	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
	{
		printf("%d\n",i);
		if (i >= INITIAL_SIZE)
			s = realloc(s, sizeof(char)*i);
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	//printf("%d\n", i);
	return i;
}

/* copy: copy 'from' into 'to'; assum to is big enough */
void copy(char *longest, char *line)
{
	longest = line;
	printf("%s\n",line);
}
