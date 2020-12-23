#include <stdio.h>

#define MAXLINE	1000

int get_line(void);
char line[MAXLINE];

int main(int argc, char *argv[])
{
	int length;
	while ((length=get_line()) > 0)
		printf("%s",line);

	return 0;
}

int get_line(void)
{
	int i=0, c;

	while(i<MAXLINE-1)
	{
		c = getchar();
		
		if (c == '\n')
			break;
		if (c == EOF)
			break;

		line[i] = c;
		++i;
	}
	if (c == '\n'){
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';

	return i;
}
